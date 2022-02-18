# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acomak <acomak@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 22:01:56 by acomak            #+#    #+#              #
#    Updated: 2022/02/16 22:07:37 by acomak           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(shell find . -type f ! -name "ft_lst*.c" -name "*.c")

BONUS = $(shell find . -type f -name "ft_lst*.c")

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I
NAME			= libft.a

all:			$(NAME)

$(NAME):		
				$(CC) $(CFLAGS) -c $(SRCS)
				ar -rcs $(NAME) *.o

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(CC) $(CFLAGS) -c $(SRCS) $(BONUS)      // Eğer -c yi kullanmasaydım main hatası verecekti
				ar -rcs $(NAME) *.o

git:
				git add .
				git commit -m "$m"
				git push
	

.PHONY:			all clean fclean re bonus