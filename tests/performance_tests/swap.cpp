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
	std::cout << "SWAP" << std::endl;

	clock_t	t1_std;
	clock_t	t2_ft;
	clock_t	t3_std;
	clock_t	t4_ft;
	size_t	t5_std = 0;
	size_t	t6_ft = 0;
	size_t	t7_std = 0;
	size_t	t8_ft = 0;

//	int		n = 1000000;
	
	
	ft::vector<std::string> str_ft0(5, "a");
	std::vector<std::string> str_std0(5, "a");
	ft::vector<int> int_ft0(2, 2);
	std::vector<int> int_std0(5, 2);

	ft::vector<std::string> str_ft(2, "b");
	std::vector<std::string> str_std(2, "b");
	ft::vector<int> int_ft(2, 2);
	std::vector<int> int_std(2, 2);

	for (int i = 0; i < 1; i++) {
		t1_std = std::clock();
		str_std0.swap(str_std);
		t1_std = std::clock() - t1_std;
		t5_std+= t1_std;
		str_std0.pop_back();
	}

	for (int i = 0; i < 1; i++) {
		t2_ft = std::clock();
		str_ft0.swap(str_ft);
		t2_ft = std::clock() - t2_ft;
		t6_ft += t2_ft;
		str_ft0.pop_back();
	}

	for (int i = 0; i < 1; i++) {
		t3_std = std::clock();
		int_std0.swap(int_std);
		t3_std = std::clock() - t3_std;
		t7_std += t3_std;
		int_std0.pop_back();
	}
	

	for (int i = 0; i < 10; i++) {
		t4_ft = std::clock();
		int_ft0.swap(int_ft);;
		t4_ft = std::clock() - t4_ft;
		t8_ft += t4_ft;
		int_ft0.pop_back();
	}

	std::cout << "string: " << (t6_ft / t5_std) << "    std: " << t5_std << " ft: " << t6_ft << std::endl;
	std::cout << "int:    " << (t8_ft / t7_std) << "    std: " << t7_std << " ft: " << t8_ft << std::endl;
}
	return (0);
}