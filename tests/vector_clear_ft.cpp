#include "../ClassTest.hpp"
#include "../vector.hpp"
#include <string.h>

int	main(void) {
	
	std::cout << "\n------------Constructor------------\n" << std::endl;

	ft::vector<int> int_vector(5, 12);
	ft::vector<float> float_vector(5, 12.1);
	ft::vector<std::string> string_vector(5, "Ana");
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	for (ft::vector<int>::iterator it_ = int_vector.begin(); it_ != int_vector.end(); it_++) {
		std::cout << *it_ << std::endl;
	}
	std::cout<< "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;

	for (ft::vector<float>::iterator it = float_vector.begin(); it != float_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	
	for (ft::vector<std::string>::iterator it = string_vector.begin(); it != string_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	
	std::cout << "\n------erase------\n" << std::endl;

	int_vector.clear();
	for (ft::vector<int>::iterator it = int_vector.begin(); it != int_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	
	float_vector.clear();
	for (ft::vector<float>::iterator it = float_vector.begin(); it != float_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	
	string_vector.clear();
	for (ft::vector<std::string>::iterator it = string_vector.begin(); it != string_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	return (0);
}