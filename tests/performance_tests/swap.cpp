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

	float	t1_std;
	float	t2_ft;
	float	t3_std;
	float	t4_ft;
	float	t5_std = 0;
	float	t6_ft = 0;
	float	t7_std = 0;
	float	t8_ft = 0;
	int		n = 10000;
	

	ft::vector<std::string> str_ft0(50, "a");
	std::vector<std::string> str_std0(5, "a");
	ft::vector<int> int_ft0(50, 2);
	std::vector<int> int_std0(50, 2);

	ft::vector<std::string> str_ft(50, "b");
	std::vector<std::string> str_std(50, "b");
	ft::vector<int> int_ft(50, 2);
	std::vector<int> int_std(50, 2);

	for (int i = 0; i < n; i++) {
		t1_std = std::clock();
		str_std0.swap(str_std);
		t1_std = ((std::clock() - t1_std) / CLOCKS_PER_SEC) * 1000;
		t5_std+= t1_std;
	}

	for (int i = 0; i < n; i++) {
		t2_ft = std::clock();
		str_ft0.swap(str_ft);
		t2_ft = ((std::clock() - t2_ft) / CLOCKS_PER_SEC) * 1000;
		t6_ft += t2_ft;
	}

	for (int i = 0; i < n; i++) {
		t3_std = std::clock();
		int_std0.swap(int_std);
		t3_std = ((std::clock() - t3_std) / CLOCKS_PER_SEC) * 1000;
		t7_std += t3_std;
	}
	

	for (int i = 0; i < n; i++) {
		t4_ft = std::clock();
		int_ft0.swap(int_ft);;
		t4_ft = ((std::clock() - t4_ft) / CLOCKS_PER_SEC) * 1000;
		t8_ft += t4_ft;
	}

	std::cout << "string: " << (int)(t6_ft / t5_std) << "    std: " << t5_std << "ms    ft: " << t6_ft << "ms" << std::endl;
	std::cout << "int:    " << (int)(t8_ft / t7_std) << "    std: " << t7_std << "ms    ft: " << t8_ft << "ms" << std::endl;
}
	return (0);
}