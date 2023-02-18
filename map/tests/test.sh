#!/bin/sh

echo "CONSTRUCTOR" > map_dif.txt
c++ -Wall -Wextra -Werror -std=c++98 ./main_constructor_o.cpp && ./a.out > ./txts/constructor_o.txt
c++ -Wall -Wextra -Werror -std=c++98 ./main_constructor_ft.cpp && valgrind --leak-check=full --show-leak-kinds=all ./a.out > ./txts/constructor_ft.txt
diff ./txts/constructor_o.txt ./txts/constructor_ft.txt >> map_dif.txt

echo "INSERT" >> map_dif.txt
c++ -Wall -Wextra -Werror -std=c++98 ./main_insert_o.cpp && ./a.out > ./txts/insert_o.txt
c++ -Wall -Wextra -Werror -std=c++98 ./main_insert_ft.cpp && valgrind --leak-check=full --show-leak-kinds=all ./a.out > ./txts/insert_ft.txt
diff ./txts/insert_o.txt ./txts/insert_ft.txt >> map_dif.txt

echo "BEGIN" >> map_dif.txt
c++ -Wall -Wextra -Werror -std=c++98 ./main_begin_o.cpp && ./a.out > ./txts/begin_o.txt
c++ -Wall -Wextra -Werror -std=c++98 ./main_begin_ft.cpp && valgrind --leak-check=full --show-leak-kinds=all ./a.out > ./txts/begin_ft.txt
diff ./txts/begin_o.txt ./txts/begin_ft.txt >> map_dif.txt

echo "OPERATOR[]" >> map_dif.txt
c++ -Wall -Wextra -Werror -std=c++98 ./main_op_bracket_o.cpp && ./a.out > ./txts/op_bracket_o.txt
c++ -Wall -Wextra -Werror -std=c++98 ./main_op_bracket_ft.cpp && valgrind --leak-check=full --show-leak-kinds=all ./a.out > ./txts/op_bracket_ft.txt
diff ./txts/op_bracket_o.txt ./txts/op_bracket_ft.txt >> map_dif.txt

echo "CLEAR" >> map_dif.txt
c++ -Wall -Wextra -Werror -std=c++98 ./main_clear_o.cpp && ./a.out > ./txts/clear_o.txt
c++ -Wall -Wextra -Werror -std=c++98 ./main_clear_ft.cpp && valgrind --leak-check=full --show-leak-kinds=all ./a.out > ./txts/clear_ft.txt
diff ./txts/clear_o.txt ./txts/clear_ft.txt >> map_dif.txt
