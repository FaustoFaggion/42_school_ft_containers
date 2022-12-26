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

echo "----at----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 vector_at_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 vector_at_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference

echo "----back----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 vector_back_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 vector_back_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference

echo "----front----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 vector_front_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 vector_front_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference

echo "----pop_back----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 vector_pop_back_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 vector_pop_back_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference

echo "----begin() & end()----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 vector_begin_end_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 vector_begin_end_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference

echo "----iterator operators----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 vector_iterator_operators_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 vector_iterator_operators_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference

echo "----assing_fill----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 vector_assign_fill_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 vector_assign_fill_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference

echo "----assing_range----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 vector_assign_range_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 vector_assign_range_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference