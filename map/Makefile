NAME		=	ft_containers

CC			=	c++

FLAGS		=	-Wall -Wextra -Werror -std=c++98 -g3  $(STD1)

STD			= 	-D STD=1

STD1		=

PATH_OBJ	=	./obj/

SRC			=	main.cpp\

OBJ			=	$(SRC:%.cpp=$(PATH_OBJ)%.o)


HEADER		=	map.hpp\
				ClassTest.hpp\
				map.hpp\
				RbTree.hpp\
				RbTree_iterator.hpp\
				node_base.hpp\

				
all:	$(NAME)

$(PATH_OBJ)%.o:	%.cpp $(HEADER)
	mkdir -p $(PATH_OBJ)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME):	$(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)
	rm -rf $(PATH_OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

run:	$(NAME)
	./$(NAME)

valgrind: clean $(NAME)
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)
	