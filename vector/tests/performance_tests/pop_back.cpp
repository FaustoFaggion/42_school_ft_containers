#include "../../ClassTest.hpp"
#include "../../vector.hpp"
#include <vector>
#include <string.h>
#include <iostream>
#include <memory>
#include <ctime>

//	clock is equal to run time in.

int	main(void) {

{
	std::cout << "POP_BACK" << std::endl;
	
	float	t1_std;
	float	t2_ft;
	float	t3_std;
	float	t4_ft;
	int		n = 1000000;
	
	ft::vector<std::string> str_ft(n, "a");
	std::vector<std::string> str_std(n, "a");
	ft::vector<int> int_ft(n, 2);
	std::vector<int> int_std(n, 2);
	
	t1_std = std::clock();
	for (int i = 0; i < n; i++)
		str_std.pop_back();
	t1_std = ((std::clock() - t1_std) / CLOCKS_PER_SEC) * 1000;

	t2_ft = std::clock();
	for (int i = 0; i < n; i++)
		str_ft.pop_back();
	t2_ft = ((std::clock() - t2_ft) / CLOCKS_PER_SEC) * 1000;

	t3_std = std::clock();
	for (int i = 0; i < n; i++)
		int_std.pop_back();
	t3_std = ((std::clock() - t3_std) / CLOCKS_PER_SEC) * 1000;

	t4_ft = std::clock();
	for (int i = 0; i < n; i++)
		int_ft.pop_back();
	t4_ft = ((std::clock() - t4_ft) / CLOCKS_PER_SEC) * 1000;

	std::cout << "string: " << (int)(t2_ft / t1_std) << "    std: " << t1_std << "ms    ft: " << t2_ft << "ms" << std::endl;
	std::cout << "int:    " << (int)(t4_ft / t3_std) << "    std: " << t3_std << "ms    ft: " << t4_ft << "ms" << std::endl;
}

}