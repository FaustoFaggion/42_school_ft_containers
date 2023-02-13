#!/bin/sh

echo "INSERT"
c++ -Wall -Wextra -Werror -std=c++98 ./main_insert_o.cpp && ./a.out > insert_o.txt
c++ -Wall -Wextra -Werror -std=c++98 ./main_insert_ft.cpp && ./a.out > insert_ft.txt
diff insert_o.txt insert_ft.txt > insert_dif.txt