#!/bin/sh

echo "START VECTOR PERFORMANCE"

c++ -Wall -Wextra -Werror -std=c++98 ./performance_tests/assign_fill.cpp && ./a.out

c++ -Wall -Wextra -Werror -std=c++98 ./performance_tests/assign_range.cpp && ./a.out

c++ -Wall -Wextra -Werror -std=c++98 ./performance_tests/at.cpp && ./a.out

c++ -Wall -Wextra -Werror -std=c++98 ./performance_tests/back.cpp && ./a.out

c++ -Wall -Wextra -Werror -std=c++98 ./performance_tests/begin.cpp && ./a.out

c++ -Wall -Wextra -Werror -std=c++98 ./performance_tests/end.cpp && ./a.out

c++ -Wall -Wextra -Werror -std=c++98 ./performance_tests/rbegin.cpp && ./a.out

c++ -Wall -Wextra -Werror -std=c++98 ./performance_tests/rend.cpp && ./a.out

c++ -Wall -Wextra -Werror -std=c++98 ./performance_tests/erase_range.cpp && ./a.out

c++ -Wall -Wextra -Werror -std=c++98 ./performance_tests/erase.cpp && ./a.out

c++ -Wall -Wextra -Werror -std=c++98 ./performance_tests/front.cpp && ./a.out

c++ -Wall -Wextra -Werror -std=c++98 ./performance_tests/insert_element.cpp && ./a.out

c++ -Wall -Wextra -Werror -std=c++98 ./performance_tests/insert_range.cpp && ./a.out

c++ -Wall -Wextra -Werror -std=c++98 ./performance_tests/insert_range_n.cpp && ./a.out

c++ -Wall -Wextra -Werror -std=c++98 ./performance_tests/pop_back.cpp && ./a.out

c++ -Wall -Wextra -Werror -std=c++98 ./performance_tests/push_back.cpp && ./a.out

c++ -Wall -Wextra -Werror -std=c++98 ./performance_tests/reserve.cpp && ./a.out

c++ -Wall -Wextra -Werror -std=c++98 ./performance_tests/resize.cpp && ./a.out

c++ -Wall -Wextra -Werror -std=c++98 ./performance_tests/swap.cpp && ./a.out

c++ -Wall -Wextra -Werror -std=c++98 ./performance_tests/swap_non_member.cpp && ./a.out

