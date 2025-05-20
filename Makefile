# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/08 18:37:01 by rolucas-          #+#    #+#              #
#    Updated: 2025/05/20 16:36:04 by rolucas-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Compilador e flags
CC = cc

CFLAGS = -Wall -Wextra -Werror -g

#Comando para remover
RM = rm -f	

# Nome da biblioteca
NAME = libft.a

# Arquivos fonte
SRC = ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcat.c ft_strlcpy.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

# Regra para criar a biblioteca
$(NAME): $(OBJ)
	ar crs $(NAME) $(OBJ)

# Limpa os .o
clean:
	$(RM) $(OBJ)

# Limpa tudo (objeto + biblioteca)
fclean: clean
	$(RM) $(NAME)

# Recompila do zero
re: fclean all

teste: re
	@$(CC) $(NAME)
	./a.out
	@$(RM) $(OBJ)

.PHONY: all clean fclean re