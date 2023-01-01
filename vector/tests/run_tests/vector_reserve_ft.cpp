#include "../../ClassTest.hpp"
#include "../../vector.hpp"
#include <string.h>


int	main(void) {
	
	std::cout << "\n------------RESERVE------------\n" << std::endl;
	std::cout << "\n------------Constructor------------\n" << std::endl;
	ft::vector<int> int_vector;
	ft::vector<float> float_vector;
	ft::vector<std::string> sstring_vector;
	ft::vector<ClassTest> class_vector;
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<string> size: " << sstring_vector.size() << " max_size: " << sstring_vector.max_size() << " capacity: " << sstring_vector.capacity() << " empty: " << sstring_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
	std::cout << "\n------reserve 1-----\n" << std::endl;
	int_vector.reserve(1);
	float_vector.reserve(1);
	sstring_vector.reserve(1);
	class_vector.reserve(1);
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<string> size: " << sstring_vector.size() << " max_size: " << sstring_vector.max_size() << " capacity: " << sstring_vector.capacity() << " empty: " << sstring_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------reserve 3-----\n" << std::endl;
	int_vector.reserve(3);
	float_vector.reserve(3);
	sstring_vector.reserve(3);
	class_vector.reserve(3);
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<string> size: " << sstring_vector.size() << " max_size: " << sstring_vector.max_size() << " capacity: " << sstring_vector.capacity() << " empty: " << sstring_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------reserve 2-----\n" << std::endl;
	int_vector.reserve(2);
	float_vector.reserve(2);
	sstring_vector.reserve(2);
	class_vector.reserve(2);
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<string> size: " << sstring_vector.size() << " max_size: " << sstring_vector.max_size() << " capacity: " << sstring_vector.capacity() << " empty: " << sstring_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------reserve 4-----\n" << std::endl;
	int_vector.reserve(4);
	float_vector.reserve(4);
	sstring_vector.reserve(4);
	class_vector.reserve(4);
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<string> size: " << sstring_vector.size() << " max_size: " << sstring_vector.max_size() << " capacity: " << sstring_vector.capacity() << " empty: " << sstring_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------reserve 2-----\n" << std::endl;
	int_vector.reserve(2);
	float_vector.reserve(2);
	sstring_vector.reserve(2);
	class_vector.reserve(2);
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<string> size: " << sstring_vector.size() << " max_size: " << sstring_vector.max_size() << " capacity: " << sstring_vector.capacity() << " empty: " << sstring_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	return (0);
}