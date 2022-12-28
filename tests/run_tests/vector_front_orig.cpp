#include "../../ClassTest.hpp"
#include <vector>
#include <string.h>

int	main(void) {

	std::cout << "\n------------FRONT------------\n" << std::endl;
	std::cout << "\n------------Constructor------------\n" << std::endl;

	ClassTest	a(7);
	ClassTest	b(9);

	std::vector<int> int_vector;
	std::vector<float> float_vector;
	std::vector<std::string> string_vector;
	std::vector<ClassTest> class_vector;
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------reserve 4-----\n" << std::endl;
	int_vector.reserve(4);
	float_vector.reserve(4);
	string_vector.reserve(4);
	class_vector.reserve(4);
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	
	std::cout << "\n--front--" << std::endl;
	int_vector.push_back(2);
	float_vector.push_back(2.1);
	string_vector.push_back("ANA 2");
	class_vector.push_back(2);
	int_vector.push_back(4);
	string_vector.push_back("ANA 4");
	float_vector.push_back(4.1);
	class_vector.push_back(4);
	std::cout << "front: " << int_vector.front() << std::endl;
	std::cout << "front: " << float_vector.front() << std::endl;
	std::cout << "front: " << string_vector.front() << std::endl;
	std::cout << "front: " << class_vector.front() << std::endl;
	return (0);
}