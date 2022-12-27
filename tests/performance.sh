#!/bin/sh

echo "START VECTOR PERFORMANCE" > test_difference

c++ -Wall -Wextra -Werror -std=c++98 performance.cpp && ./a.out