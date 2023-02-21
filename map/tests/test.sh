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

echo "FIND" >> map_dif.txt
c++ -Wall -Wextra -Werror -std=c++98 ./main_find_o.cpp && ./a.out > ./txts/find_o.txt
c++ -Wall -Wextra -Werror -std=c++98 ./main_find_ft.cpp && valgrind --leak-check=full --show-leak-kinds=all ./a.out > ./txts/find_ft.txt
diff ./txts/find_o.txt ./txts/find_ft.txt >> map_dif.txt

echo "ERASE" >> map_dif.txt
c++ -Wall -Wextra -Werror -std=c++98 ./main_erase_o.cpp && ./a.out > ./txts/erase_o.txt
c++ -Wall -Wextra -Werror -std=c++98 ./main_erase_ft.cpp && valgrind --leak-check=full --show-leak-kinds=all ./a.out > ./txts/erase_ft.txt
diff ./txts/erase_o.txt ./txts/erase_ft.txt >> map_dif.txt

echo "SWAP" >> map_dif.txt
c++ -Wall -Wextra -Werror -std=c++98 ./main_erase_o.cpp && ./a.out > ./txts/swap_o.txt
c++ -Wall -Wextra -Werror -std=c++98 ./main_erase_ft.cpp && valgrind --leak-check=full --show-leak-kinds=all ./a.out > ./txts/swap_ft.txt
diff ./txts/swap_o.txt ./txts/swap_ft.txt >> map_dif.txt

echo "COUNT" >> map_dif.txt
c++ -Wall -Wextra -Werror -std=c++98 ./main_count_o.cpp && ./a.out > ./txts/count_o.txt
c++ -Wall -Wextra -Werror -std=c++98 ./main_count_ft.cpp && valgrind --leak-check=full --show-leak-kinds=all ./a.out > ./txts/count_ft.txt
diff ./txts/count_o.txt ./txts/count_ft.txt >> map_dif.txt