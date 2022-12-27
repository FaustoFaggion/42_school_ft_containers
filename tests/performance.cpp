#include "../ClassTest.hpp"
#include "../vector.hpp"
#include <vector>
#include <string.h>
#include <iostream>
#include <memory>
#include <ctime>


int	main(void) {

	std::cout << "ASSIGN FILL" << std::endl;
{
	clock_t	t1_std;
	clock_t	t2_ft;
	clock_t	t3_std;
	clock_t	t4_ft;
	int		n = 1000000;
	
	ft::vector<std::string> str_ft;
	std::vector<std::string> str_std;
	ft::vector<int> int_ft;
	std::vector<int> int_std;
	
	t1_std = std::clock();
	for (int i = 0; i < 100; i++)
		str_std.assign(n, "a");
	t1_std = std::clock() - t1_std;

	t2_ft = std::clock();
	for (int i = 0; i < 100; i++)
		str_ft.assign(n, "a");
	t2_ft = std::clock() - t2_ft;

	t3_std = std::clock();
	for (int i = 0; i < 100; i++)
		int_std.assign(n, 2);
	t3_std = std::clock() - t3_std;

	t4_ft = std::clock();
	for (int i = 0; i < 100; i++)
		int_ft.assign(n, 2);
	t4_ft = std::clock() - t4_ft;

	std::cout << "string: " << (t2_ft / t1_std) << "    std: " << t1_std << " ft: " << t2_ft << std::endl;
	std::cout << "int:    " << (t4_ft / t3_std) << "    std: " << t3_std << " ft: " << t4_ft << std::endl;
}

	std::cout << "PUSH_BACK" << std::endl;
{
	clock_t	t1_std;
	clock_t	t2_ft;
	clock_t	t3_std;
	clock_t	t4_ft;
	int		n = 1000000;
	
	ft::vector<std::string> str_ft;
	std::vector<std::string> str_std;
	ft::vector<int> int_ft;
	std::vector<int> int_std;
	
	t1_std = std::clock();
	for (int i = 0; i < n; i++)
		str_std.push_back("a");
	t1_std = std::clock() - t1_std;

	t2_ft = std::clock();
	for (int i = 0; i < n; i++)
		str_ft.push_back("a");
	t2_ft = std::clock() - t2_ft;

	t3_std = std::clock();
	for (int i = 0; i < n; i++)
		int_std.push_back(2);
	t3_std = std::clock() - t3_std;

	t4_ft = std::clock();
	for (int i = 0; i < n; i++)
		int_ft.push_back(2);
	t4_ft = std::clock() - t4_ft;

	std::cout << "string: " << (t2_ft / t1_std) << "    std: " << t1_std << " ft: " << t2_ft << std::endl;
	std::cout << "int:    " << (t4_ft / t3_std) << "    std: " << t3_std << " ft: " << t4_ft << std::endl;
}

	std::cout << "POP_BACK" << std::endl;
{
	clock_t	t1_std;
	clock_t	t2_ft;
	clock_t	t3_std;
	clock_t	t4_ft;
	int		n = 1000000;
	
	ft::vector<std::string> str_ft(n, "a");
	std::vector<std::string> str_std(n, "a");
	ft::vector<int> int_ft(n, 2);
	std::vector<int> int_std(n, 2);
	
	t1_std = std::clock();
	for (int i = 0; i < n; i++)
		str_std.pop_back();
	t1_std = std::clock() - t1_std;

	t2_ft = std::clock();
	for (int i = 0; i < n; i++)
		str_ft.pop_back();
	t2_ft = std::clock() - t2_ft;

	t3_std = std::clock();
	for (int i = 0; i < n; i++)
		int_std.pop_back();
	t3_std = std::clock() - t3_std;

	t4_ft = std::clock();
	for (int i = 0; i < n; i++)
		int_ft.pop_back();
	t4_ft = std::clock() - t4_ft;

	std::cout << "string: " << (t2_ft / t1_std) << "    std: " << t1_std << " ft: " << t2_ft << std::endl;
	std::cout << "int:    " << (t4_ft / t3_std) << "    std: " << t3_std << " ft: " << t4_ft << std::endl;
}


}