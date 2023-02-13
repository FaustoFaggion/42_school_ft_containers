#!/bin/sh

echo "INSERT"
c++ -Wall -Wextra -Werror -std=c++98 ./main_insert_o.cpp && ./a.out > o.txt
c++ -Wall -Wextra -Werror -std=c++98 ./main_insert_ft.cpp && ./a.out > ft.txt
diff o.txt ft.txt > dif.txt