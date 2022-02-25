# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acomak <acomak@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 22:01:56 by acomak            #+#    #+#              #
#    Updated: 2022/02/25 15:39:00 by acomak           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(shell find . -type f ! -name "ft_lst*.c" -name "*.c")

BONUS = $(shell find . -type f -name "ft_lst*.c")

CC				= gcc
RM				= rm -f *.o
CFLAGS			= -Wall -Wextra -Werror -I.
NAME			= libft.a

all:			$(NAME)

$(NAME):		
				$(CC) $(CFLAGS) -c $(SRCS)
				ar -rcs $(NAME) *.o

bonus:			
				$(CC) $(CFLAGS) -c $(BONUS)
				ar -rcs $(NAME) *.o
	
clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

git:
				git add .
				git commit -m "$m"
				git push
	

.PHONY:			all clean fclean re bonus