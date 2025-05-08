# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/08 18:37:01 by rolucas-          #+#    #+#              #
#    Updated: 2025/05/08 21:53:12 by rolucas-         ###   ########.fr        #
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
SRC = ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

# Regra para criar a biblioteca
$(NAME): $(OBJ)
	ar crs $(NAME) $(OBJ)
	
# Regra para compilar os .c em .o
%.o: %.c
	$(CC) $(CFLAG) -c $< -o $@

# Limpa os .o
RM = rm -f	
clean:
	$(RM) $(OBJ)

# Limpa tudo (objeto + biblioteca)
fclean: clean
	$(RM) $(NAME)

# Recompila do zero
re: fclean all

teste: re clean
	$(CC) $(NAME)
	./a.out

.PHONY: all clean fclean re