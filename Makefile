# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/08 18:37:01 by rolucas-          #+#    #+#              #
#    Updated: 2025/05/09 18:47:51 by rolucas-         ###   ########.fr        #
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
SRC = ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcat.c ft_strlcpy.c

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