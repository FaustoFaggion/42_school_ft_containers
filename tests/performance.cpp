#include "../ClassTest.hpp"
#include "../vector.hpp"
#include <vector>
#include <string.h>
#include <iostream>
#include <memory>
#include <ctime>


int	main(void) {

	std::cout << "RESIZE" << std::endl;
{
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
		str_std.resize(1000);
	t1_std = std::clock() - t1_std;

	t2_ft = std::clock();
	for (int i = 0; i < n; i++)
		str_ft.resize(1000);
	t2_ft = std::clock() - t2_ft;

	t3_std = std::clock();
	for (int i = 0; i < n; i++)
		int_std.resize(1000);
	t3_std = std::clock() - t3_std;

	t4_ft = std::clock();
	for (int i = 0; i < n; i++)
		int_ft.resize(1000);
	t4_ft = std::clock() - t4_ft;

	std::cout << "string: " << (t2_ft / t1_std) << "    std: " << t1_std << " ft: " << t2_ft << std::endl;
	std::cout << "int:    " << (t4_ft / t3_std) << "    std: " << t3_std << " ft: " << t4_ft << std::endl;
}

	std::cout << "RESERVE" << std::endl;
{
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

	std::cout << "AT" << std::endl;
{
	clock_t	t1_std;
	clock_t	t2_ft;
	clock_t	t3_std;
	clock_t	t4_ft;
	int		n = 1000000;
	
	ft::vector<std::string> str_ft0(200, "a");
	std::vector<std::string> str_std0(200, "a");
	ft::vector<int> int_ft0(200, 2);
	std::vector<int> int_std0(200, 2);

	ft::vector<std::string> str_ft;
	std::vector<std::string> str_std;
	ft::vector<int> int_ft;
	std::vector<int> int_std;
	
	t1_std = std::clock();
	for (int i = 0; i < n; i++)
		str_std0.at(199);
	t1_std = std::clock() - t1_std;

	t2_ft = std::clock();
	for (int i = 0; i < n; i++)
		str_ft0.at(199);
	t2_ft = std::clock() - t2_ft;

	t3_std = std::clock();
	for (int i = 0; i < n; i++)
		int_std0.at(199);
	t3_std = std::clock() - t3_std;

	t4_ft = std::clock();
	for (int i = 0; i < n; i++)
		int_ft0.at(199);
	t4_ft = std::clock() - t4_ft;

	std::cout << "string: " << (t2_ft / t1_std) << "    std: " << t1_std << " ft: " << t2_ft << std::endl;
	std::cout << "int:    " << (t4_ft / t3_std) << "    std: " << t3_std << " ft: " << t4_ft << std::endl;
}

	std::cout << "BACK" << std::endl;
{
	clock_t	t1_std;
	clock_t	t2_ft;
	clock_t	t3_std;
	clock_t	t4_ft;
	int		n = 1000000;
	
	ft::vector<std::string> str_ft0(200, "a");
	std::vector<std::string> str_std0(200, "a");
	ft::vector<int> int_ft0(200, 2);
	std::vector<int> int_std0(200, 2);

	ft::vector<std::string> str_ft;
	std::vector<std::string> str_std;
	ft::vector<int> int_ft;
	std::vector<int> int_std;
	
	t1_std = std::clock();
	for (int i = 0; i < n; i++)
		str_std0.back();
	t1_std = std::clock() - t1_std;

	t2_ft = std::clock();
	for (int i = 0; i < n; i++)
		str_ft0.back();
	t2_ft = std::clock() - t2_ft;

	t3_std = std::clock();
	for (int i = 0; i < n; i++)
		int_std0.back();
	t3_std = std::clock() - t3_std;

	t4_ft = std::clock();
	for (int i = 0; i < n; i++)
		int_ft0.back();
	t4_ft = std::clock() - t4_ft;

	std::cout << "string: " << (t2_ft / t1_std) << "    std: " << t1_std << " ft: " << t2_ft << std::endl;
	std::cout << "int:    " << (t4_ft / t3_std) << "    std: " << t3_std << " ft: " << t4_ft << std::endl;
}

	std::cout << "FRONT" << std::endl;
{
	clock_t	t1_std;
	clock_t	t2_ft;
	clock_t	t3_std;
	clock_t	t4_ft;
	int		n = 1000000;
	
	ft::vector<std::string> str_ft0(200, "a");
	std::vector<std::string> str_std0(200, "a");
	ft::vector<int> int_ft0(200, 2);
	std::vector<int> int_std0(200, 2);

	ft::vector<std::string> str_ft;
	std::vector<std::string> str_std;
	ft::vector<int> int_ft;
	std::vector<int> int_std;
	
	t1_std = std::clock();
	for (int i = 0; i < n; i++)
		str_std0.front();
	t1_std = std::clock() - t1_std;

	t2_ft = std::clock();
	for (int i = 0; i < n; i++)
		str_ft0.front();
	t2_ft = std::clock() - t2_ft;

	t3_std = std::clock();
	for (int i = 0; i < n; i++)
		int_std0.front();
	t3_std = std::clock() - t3_std;

	t4_ft = std::clock();
	for (int i = 0; i < n; i++)
		int_ft0.front();
	t4_ft = std::clock() - t4_ft;

	std::cout << "string: " << (t2_ft / t1_std) << "    std: " << t1_std << " ft: " << t2_ft << std::endl;
	std::cout << "int:    " << (t4_ft / t3_std) << "    std: " << t3_std << " ft: " << t4_ft << std::endl;
}

	std::cout << "END" << std::endl;
{
	clock_t	t1_std;
	clock_t	t2_ft;
	clock_t	t3_std;
	clock_t	t4_ft;
	int		n = 1000000;
	
	ft::vector<std::string> str_ft0(200, "a");
	std::vector<std::string> str_std0(200, "a");
	ft::vector<int> int_ft0(200, 2);
	std::vector<int> int_std0(200, 2);

	ft::vector<std::string> str_ft;
	std::vector<std::string> str_std;
	ft::vector<int> int_ft;
	std::vector<int> int_std;
	
	t1_std = std::clock();
	for (int i = 0; i < n; i++)
		str_std0.end();
	t1_std = std::clock() - t1_std;

	t2_ft = std::clock();
	for (int i = 0; i < n; i++)
		str_ft0.end();
	t2_ft = std::clock() - t2_ft;

	t3_std = std::clock();
	for (int i = 0; i < n; i++)
		int_std0.end();
	t3_std = std::clock() - t3_std;

	t4_ft = std::clock();
	for (int i = 0; i < n; i++)
		int_ft0.end();
	t4_ft = std::clock() - t4_ft;

	std::cout << "string: " << (t2_ft / t1_std) << "    std: " << t1_std << " ft: " << t2_ft << std::endl;
	std::cout << "int:    " << (t4_ft / t3_std) << "    std: " << t3_std << " ft: " << t4_ft << std::endl;
}

	std::cout << "BEGIN" << std::endl;
{
	clock_t	t1_std;
	clock_t	t2_ft;
	clock_t	t3_std;
	clock_t	t4_ft;
	int		n = 1000000;
	
	ft::vector<std::string> str_ft0(200, "a");
	std::vector<std::string> str_std0(200, "a");
	ft::vector<int> int_ft0(200, 2);
	std::vector<int> int_std0(200, 2);

	ft::vector<std::string> str_ft;
	std::vector<std::string> str_std;
	ft::vector<int> int_ft;
	std::vector<int> int_std;
	
	t1_std = std::clock();
	for (int i = 0; i < n; i++)
		str_std0.begin();
	t1_std = std::clock() - t1_std;

	t2_ft = std::clock();
	for (int i = 0; i < n; i++)
		str_ft0.begin();
	t2_ft = std::clock() - t2_ft;

	t3_std = std::clock();
	for (int i = 0; i < n; i++)
		int_std0.begin();
	t3_std = std::clock() - t3_std;

	t4_ft = std::clock();
	for (int i = 0; i < n; i++)
		int_ft0.begin();
	t4_ft = std::clock() - t4_ft;

	std::cout << "string: " << (t2_ft / t1_std) << "    std: " << t1_std << " ft: " << t2_ft << std::endl;
	std::cout << "int:    " << (t4_ft / t3_std) << "    std: " << t3_std << " ft: " << t4_ft << std::endl;
}

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
	for (int i = 0; i < n; i++)
		str_std.assign(10, "a");
	t1_std = std::clock() - t1_std;

	t2_ft = std::clock();
	for (int i = 0; i < n; i++)
		str_ft.assign(10, "a");
	t2_ft = std::clock() - t2_ft;

	t3_std = std::clock();
	for (int i = 0; i < n; i++)
		int_std.assign(10, 2);
	t3_std = std::clock() - t3_std;

	t4_ft = std::clock();
	for (int i = 0; i < n; i++)
		int_ft.assign(10, 2);
	t4_ft = std::clock() - t4_ft;

	std::cout << "string: " << (t2_ft / t1_std) << "    std: " << t1_std << " ft: " << t2_ft << std::endl;
	std::cout << "int:    " << (t4_ft / t3_std) << "    std: " << t3_std << " ft: " << t4_ft << std::endl;
}

	std::cout << "ASSIGN RANGE" << std::endl;
{
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
		str_std.assign(str_std0.begin(), str_std0.end());
	t1_std = std::clock() - t1_std;

	t2_ft = std::clock();
	for (int i = 0; i < n; i++)
		str_ft.assign(str_ft0.begin(), str_ft0.end());
	t2_ft = std::clock() - t2_ft;

	t3_std = std::clock();
	for (int i = 0; i < n; i++)
		int_std.assign(int_std0.begin(), int_std0.end());
	t3_std = std::clock() - t3_std;

	t4_ft = std::clock();
	for (int i = 0; i < n; i++)
		int_ft.assign(int_ft0.begin(), int_ft0.end());
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

	std::cout << "ERASE" << std::endl;
{
	clock_t	t1_std;
	clock_t	t2_ft;
	clock_t	t3_std;
	clock_t	t4_ft;
	int		n = 1000000;
	
	ft::vector<std::string> str_ft0(n, "a");
	std::vector<std::string> str_std0(n, "a");
	ft::vector<int> int_ft0(n, 2);
	std::vector<int> int_std0(n, 2);

	ft::vector<std::string> str_ft;
	std::vector<std::string> str_std;
	ft::vector<int> int_ft;
	std::vector<int> int_std;
	
	t1_std = std::clock();
	for (int i = 0; i < n - 2; i++)
		str_std0.erase(str_std0.begin() + (n - i) - 1);
	t1_std = std::clock() - t1_std;

	t2_ft = std::clock();
	for (int i = 0; i < n - 2; i++)
		str_ft0.erase(str_ft0.begin() + (n - i) - 1);
	t2_ft = std::clock() - t2_ft;

	t3_std = std::clock();
	for (int i = 0; i < n - 2; i++)
		int_std0.erase(int_std0.begin() + (n - i) - 1);
	t3_std = std::clock() - t3_std;

	t4_ft = std::clock();
	for (int i = 0; i < n - 2; i++)
		int_ft0.erase(int_ft0.begin() + (n - i) - 1);
	t4_ft = std::clock() - t4_ft;

	std::cout << "string: " << (t2_ft / t1_std) << "    std: " << t1_std << " ft: " << t2_ft << std::endl;
	std::cout << "int:    " << (t4_ft / t3_std) << "    std: " << t3_std << " ft: " << t4_ft << std::endl;
}


	std::cout << "ERASE RANGE" << std::endl;
{
	clock_t	t1_std;
	clock_t	t2_ft;
	clock_t	t3_std;
	clock_t	t4_ft;

	int		n = 1000000;
	
	ft::vector<std::string> str_ft0(n, "a");
	std::vector<std::string> str_std0(n, "a");
	ft::vector<int> int_ft0(n, 2);
	std::vector<int> int_std0(n, 2);

	ft::vector<std::string> str_ft;
	std::vector<std::string> str_std;
	ft::vector<int> int_ft;
	std::vector<int> int_std;
	
	t1_std = std::clock();
	for (int i = 0; i < 10; i++) {
		str_std0.erase(str_std0.begin() + 4, str_std0.begin() + 100);
	}
	t1_std = std::clock() - t1_std;

	t2_ft = std::clock();
	for (int i = 0; i < 10; i++) {
		str_ft0.erase(str_ft0.begin() + 4, str_ft0.begin() + 100);
	}
	t2_ft = std::clock() - t2_ft;
	
	t3_std = std::clock();
	for (int i = 0; i < 10; i++) {
		int_std0.erase(int_std0.begin() + 4, int_std0.begin() + 100);
	}
	t3_std = std::clock() - t3_std;

	t4_ft = std::clock();
	for (int i = 0; i < 10; i++) {
		int_ft0.erase(int_ft0.begin() + 4, int_ft0.begin() + 100);
	}
	t4_ft = std::clock() - t4_ft;

	std::cout << "string: " << (t2_ft / t1_std) << "    std: " << t1_std << " ft: " << t2_ft << std::endl;
	std::cout << "int:    " << (t4_ft / t3_std) << "    std: " << t3_std << " ft: " << t4_ft << std::endl;
}


{
	std::cout << "INSERT" << std::endl;
	
	clock_t	t1_std;
	clock_t	t2_ft;
	clock_t	t3_std;
	clock_t	t4_ft;
	clock_t	t5_std;
	clock_t	t6_ft;
	clock_t	t7_std;
	clock_t	t8_ft;
	int		n = 1000000;
	
	ft::vector<std::string> str_ft0(n, "a");
	std::vector<std::string> str_std0(n, "a");
	ft::vector<int> int_ft0(n, 2);
	std::vector<int> int_std0(n, 2);

	ft::vector<std::string> str_ft;
	std::vector<std::string> str_std;
	ft::vector<int> int_ft;
	std::vector<int> int_std;
	
	for (int i = 0; i < 10; i++) {
		t1_std = std::clock();
		str_std0.insert(str_std0.begin() + 2, "a");
		t1_std = std::clock() - t1_std;
		t5_std+= t1_std;
		str_std0.pop_back();
	}

	for (int i = 0; i < 10; i++) {
		t2_ft = std::clock();
		str_ft0.insert(str_ft0.begin() + 2, "a");
		t2_ft = std::clock() - t2_ft;
		t6_ft += t2_ft;
		str_ft0.pop_back();
	}

	for (int i = 0; i < 10; i++) {
		t3_std = std::clock();
		int_std0.insert(int_std0.begin() + 2, 1);
		t3_std = std::clock() - t3_std;
		t7_std += t3_std;
		int_std0.pop_back();
	}

	for (int i = 0; i < 10; i++) {
		t4_ft = std::clock();
		int_ft0.insert(int_ft0.begin() + 2, 1);;
		t4_ft = std::clock() - t4_ft;
		t8_ft += t4_ft;
		int_ft0.pop_back();
	}

	std::cout << "string: " << (t6_ft / t5_std) << "    std: " << t5_std << " ft: " << t6_ft << std::endl;
	std::cout << "int:    " << (t8_ft / t7_std) << "    std: " << t7_std << " ft: " << t8_ft << std::endl;
}


}