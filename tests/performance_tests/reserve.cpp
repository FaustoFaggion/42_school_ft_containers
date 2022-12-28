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
	std::cout << "RESERVE" << std::endl;

	clock_t	t1_std;
	clock_t	t2_ft;
	clock_t	t3_std;
	clock_t	t4_ft;
	int		n = 1000000;
	
	ft::vector<std::string> str_ft0(20, "a");
	std::vector<std::string> str_std0(20, "a");
	ft::vector<int> int_ft0(20, 2);
	std::vector<int> int_std0(20, 2);

	ft::vector<std::string> str_ft;
	std::vector<std::string> str_std;
	ft::vector<int> int_ft;
	std::vector<int> int_std;
	
	t1_std = std::clock();
	for (int i = 0; i < n; i++)
		str_std.reserve(1000);
	t1_std = std::clock() - t1_std;

	t2_ft = std::clock();
	for (int i = 0; i < n; i++)
		str_ft.reserve(1000);
	t2_ft = std::clock() - t2_ft;

	t3_std = std::clock();
	for (int i = 0; i < n; i++)
		int_std.reserve(1000);
	t3_std = std::clock() - t3_std;

	t4_ft = std::clock();
	for (int i = 0; i < n; i++)
		int_ft.reserve(000);
	t4_ft = std::clock() - t4_ft;

	std::cout << "string: " << (t2_ft / t1_std) << "    std: " << t1_std << " ft: " << t2_ft << std::endl;
	std::cout << "int:    " << (t4_ft / t3_std) << "    std: " << t3_std << " ft: " << t4_ft << std::endl;
}

}