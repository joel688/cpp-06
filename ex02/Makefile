NAME		= Conversion

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -g3

SRCS		= main.cpp\
			  ./Class/ScalarConverter/ScalarConverter.cpp\
				./Class/Serializer/Serializer.cpp\
				./Class/Base/Base.cpp

OBJS		=		$(SRCS:.cpp=.o)

all			:		$(NAME)

$(NAME)		:		$(OBJS)
					$(CXX)  $(CXXFLAGS) $(OBJS) -o  $(NAME)

clean		:
					rm -rf $(OBJS)

fclean		:		clean
					rm -rf $(NAME)

re			:		fclean all

.PHONY		:		all	clean	fclean	re

