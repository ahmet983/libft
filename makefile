# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acomak <acomak@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/11 12:13:45 by acomak            #+#    #+#              #
#    Updated: 2022/02/14 11:58:12 by acomak           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(shell find . -type f ! -name "ft_lst*.c" -name "*.c")

OBJS			= $(SRCS:.c=.o)


BONUS = $(wildcart ft_lst*.c)

BONUS_OBJS		= $(BONUS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar -rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
				ar -rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re bonus

git:
	git add .
	git commit -m "$m"
	git push