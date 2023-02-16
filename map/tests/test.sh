#!/bin/sh

# echo "INSERT" > map_dif.txt
# c++ -Wall -Wextra -Werror -std=c++98 ./main_insert_o.cpp && ./a.out > ./txts/insert_o.txt
# c++ -Wall -Wextra -Werror -std=c++98 ./main_insert_ft.cpp && ./a.out > ./txts/insert_ft.txt
# diff ./txts/insert_o.txt ./txts/insert_ft.txt >> map_dif.txt

# echo "BEGIN" >> map_dif.txt
# c++ -Wall -Wextra -Werror -std=c++98 ./main_begin_o.cpp && valgrind --leak-check=full --show-leak-kinds=all ./a.out > ./txts/begin_o.txt
# c++ -Wall -Wextra -Werror -std=c++98 ./main_begin_ft.cpp && ./a.out > ./txts/begin_ft.txt
# diff ./txts/begin_o.txt ./txts/begin_ft.txt >> map_dif.txt

# echo "OPERATOR[]" >> map_dif.txt
# c++ -Wall -Wextra -Werror -std=c++98 ./main_op_bracket_o.cpp && valgrind --leak-check=full --show-leak-kinds=all ./a.out > ./txts/op_bracket_o.txt
# c++ -Wall -Wextra -Werror -std=c++98 ./main_op_bracket_ft.cpp && ./a.out > ./txts/op_bracket_ft.txt
# diff ./txts/op_bracket_o.txt ./txts/op_bracket_ft.txt >> map_dif.txt

echo "AT" >> map_dif.txt
c++ -Wall -Wextra -Werror -std=c++98 ./main_at_o.cpp && valgrind --leak-check=full --show-leak-kinds=all ./a.out > ./txts/at_o.txt
c++ -Wall -Wextra -Werror -std=c++98 ./main_at_ft.cpp && ./a.out > ./txts/at_ft.txt
diff ./txts/at_o.txt ./txts/at_ft.txt >> map_dif.txt