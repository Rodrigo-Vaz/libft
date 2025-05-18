# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/08 18:37:01 by rolucas-          #+#    #+#              #
#    Updated: 2025/05/18 20:47:36 by rolucas-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Compilador e flags
CC = cc

CFLAG = -Wall -Wextra -Werror -g

#Comando para remover
RM = rm -f	

# Nome da biblioteca
NAME = libft.a

# Arquivos fonte
SRC = ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcat.c ft_strlcpy.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

# Regra para criar a biblioteca
$(NAME): $(OBJ)
	@ar crs $(NAME) $(OBJ)
	
# Regra para compilar os .c em .o
%.o: %.c
	@$(CC) $(CFLAG) -c $< -o $@

# Limpa os .o
clean:
	@$(RM) $(OBJ)

# Limpa tudo (objeto + biblioteca)
fclean: clean
	@$(RM) $(NAME)

# Recompila do zero
re: fclean all

teste: re
	@$(CC) $(NAME)
	./a.out
	@$(RM) $(OBJ)

.PHONY: all clean fclean re