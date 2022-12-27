#include "../ClassTest.hpp"
#include <vector>
#include <string.h>

int	main(void) {

	std::cout << "\n------------Constructor------------\n" << std::endl;

	std::vector<int> int_vector(5, 22);
	std::vector<float> float_vector(5, 22.1);
	std::vector<std::string> string_vector(5, "Ana");
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	for (std::vector<int>::iterator it_ = int_vector.begin(); it_ != int_vector.end(); it_++) {
		std::cout << *it_ << std::endl;
	}
	std::cout<< "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;

	for (std::vector<float>::iterator it = float_vector.begin(); it != float_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	
	for (std::vector<std::string>::iterator it = string_vector.begin(); it != string_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	
	std::cout << "\n------swap------\n" << std::endl;

	std::vector<int> int_swap1(2, 222);
	std::vector<float> float_swap1(2, 222.1);
	std::vector<std::string> string_swap1(2, "Ana swap");

	swap(int_vector, int_swap1);
	for (std::vector<int>::iterator it = int_vector.begin(); it != int_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout << "--swap--" << std::endl;
	for (std::vector<int>::iterator it = int_swap1.begin(); it != int_swap1.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	
	swap(float_vector, float_swap1);
	for (std::vector<float>::iterator it = float_vector.begin(); it != float_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout << "--swap--" << std::endl;
	for (std::vector<float>::iterator it = float_swap1.begin(); it != float_swap1.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	
	swap(string_vector, string_swap1);
	for (std::vector<std::string>::iterator it = string_vector.begin(); it != string_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout << "--swap--" << std::endl;
	for (std::vector<std::string>::iterator it = string_swap1.begin(); it != string_swap1.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	
	
	std::cout << "\n------------Constructor------------\n" << std::endl;

	ClassTest	a(2);
	ClassTest	b(6);
//	ClassTest	c(b);

	std::vector<ClassTest> class_vector;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------int push_back1------\n" << std::endl;	
	class_vector.push_back(a);
	std::cout << class_vector[0] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	
	std::cout << "\n------int push_back2------\n" << std::endl;
	class_vector.push_back(a);
	std::cout << class_vector[1] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	
	std::cout << "\n------SWAP------\n" << std::endl;

	std::vector<ClassTest> class_swap1(8, a);
	swap(class_vector, class_swap1);
	for (std::vector<ClassTest>::iterator it = class_vector.begin(); it != class_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout << "--swap--" << std::endl;
	for (std::vector<ClassTest>::iterator it = class_swap1.begin(); it != class_swap1.end(); it++) {
		std::cout << *it << std::endl;
	}

	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	return (0);
}
