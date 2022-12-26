#!/bin/sh

echo "START VECTOR TESTS" > test_difference
echo "" >> test_difference

echo "----resize----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 vector_resize_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 vector_resize_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference

echo "----reserve----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 vector_reserve_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 vector_reserve_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference

echo "----push_back----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 vector_push_back_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 vector_push_back_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference




