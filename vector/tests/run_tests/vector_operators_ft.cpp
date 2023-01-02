#include "../../ClassTest.hpp"
#include "../../vector.hpp"
#include <string.h>

int	main(void) {

		
	std::cout << "\n------------Constructor------------\n" << std::endl;

	ft::vector<int> int_vector(2, 122);
	for (ft::vector<int>::iterator it_ = int_vector.begin(); it_ != int_vector.end(); it_++) {
		std::cout << *it_ << std::endl;
	}
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;

	ft::vector<int> int_vector2(6, 126);
	for (ft::vector<int>::iterator it_ = int_vector2.begin(); it_ != int_vector2.end(); it_++) {
		std::cout << *it_ << std::endl;
	}
	std::cout << "<int> size: " << int_vector2.size() << " max_size: " << int_vector2.max_size() << " capacity: " << int_vector2.capacity() << " empty: " << int_vector2.empty() << std::endl;

	std::cout << "vector1 == vector2: " << (int_vector == int_vector2) << std::endl;
	std::cout << "vector1 != vector2: " << (int_vector != int_vector2) << std::endl;
	std::cout << "vector1 < vector2: " << (int_vector < int_vector2) << std::endl;
	int_vector = int_vector2;


	
}