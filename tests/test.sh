#!/bin/sh

echo "START VECTOR TESTS" > test_difference
echo "" >> test_difference

echo "----resize----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_resize_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_resize_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference

echo "----reserve----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_reserve_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_reserve_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference

echo "----push_back----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_push_back_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_push_back_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference

echo "----at----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_at_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_at_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference

echo "----back----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_back_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_back_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference

echo "----front----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_front_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_front_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference

echo "----pop_back----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_pop_back_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_pop_back_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference

echo "----begin() & end()----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_begin_end_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_begin_end_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference

echo "----rbegin() & rend()----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_rbegin_rend_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_rbegin_rend_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference

echo "----iterator operators----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_iterator_operators_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_iterator_operators_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference

echo "----assing_fill----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_assign_fill_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_assign_fill_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference

echo "----assing_range----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_assign_range_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_assign_range_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference

echo "----erase_position----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_erase_position_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_erase_position_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference

echo "----erase_range----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_erase_range_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_erase_range_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference

echo "----insert_element----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_insert_element_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_insert_element_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference

echo "----insert_range----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_insert_range_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_insert_range_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference

echo "----insert_range_n----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_insert_range_n_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_insert_range_n_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference


echo "----constructors----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_constructors_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_constructors_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference

echo "----operator_equal----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_operator_equal_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_operator_equal_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference

echo "----clear----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_clear_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_clear_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference

echo "----swap----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_swap_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_swap_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference

echo "----swap_non_member----" >> test_difference
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_swap_non_member_orig.cpp && ./a.out > test1
c++ -Wall -Wextra -Werror -std=c++98 ./run_tests/vector_swap_non_member_ft.cpp && ./a.out > test2
diff test1 test2 >> test_difference
echo "" >> test_difference