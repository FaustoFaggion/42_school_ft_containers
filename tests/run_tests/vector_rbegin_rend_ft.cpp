#include "../../ClassTest.hpp"
#include "../../vector.hpp"
#include <string.h>

int	main(void) {

	std::cout << "\n------------RBEGIN() & REND()------------\n" << std::endl;
	std::cout << "\n------------Constructor------------\n" << std::endl;

	ClassTest	a(2);
	ClassTest	b(6);

	ft::vector<int> int_vector;
	ft::vector<float> float_vector;
	ft::vector<std::string> string_vector;
	ft::vector<ClassTest> class_vector;
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
	std::cout << "\n------reserve 5-----\n" << std::endl;
	int_vector.reserve(5);
	float_vector.reserve(5);
	string_vector.reserve(5);
	class_vector.reserve(5);
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;	
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------int push_back1------\n" << std::endl;
	int_vector.push_back(12);
	float_vector.push_back(12.1);
	string_vector.push_back("ANA 2");
	class_vector.push_back(a);
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
	std::cout << "\n------int push_back2------\n" << std::endl;
	int_vector.push_back(14);
	float_vector.push_back(14.1);
	string_vector.push_back("ANA 4");
	class_vector.push_back(b);
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------end------\n" << std::endl;
	for(ft::vector<int>::reverse_iterator it = int_vector.rbegin(); it != int_vector.rend(); it++) {
		std::cout << *it << std::endl;
	}

	std::cout << "----" << std::endl;
	for(ft::vector<float>::reverse_iterator it = float_vector.rbegin(); it != float_vector.rend(); it++) {
		std::cout << *it << std::endl;
	}
	
	std::cout << "----" << std::endl;
	for(ft::vector<std::string>::reverse_iterator it = string_vector.rbegin(); it != string_vector.rend(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout << "----" << std::endl;
	for(ft::vector<ClassTest>::reverse_iterator it = class_vector.rbegin(); it != class_vector.rend(); it++) {
		std::cout << *it << std::endl;
	}
	return (0);
}
