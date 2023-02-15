#!/bin/sh

echo "INSERT" > map_dif.txt
c++ -Wall -Wextra -Werror -std=c++98 ./main_insert_o.cpp && ./a.out > insert_o.txt
c++ -Wall -Wextra -Werror -std=c++98 ./main_insert_ft.cpp && ./a.out > insert_ft.txt
diff insert_o.txt insert_ft.txt >> map_dif.txt

echo "BEGIN" >> map_dif.txt
c++ -Wall -Wextra -Werror -std=c++98 ./main_begin_o.cpp && valgrind --leak-check=full --show-leak-kinds=all ./a.out > begin_o.txt
c++ -Wall -Wextra -Werror -std=c++98 ./main_begin_ft.cpp && ./a.out > begin_ft.txt
diff begin_o.txt begin_ft.txt >> map_dif.txt
