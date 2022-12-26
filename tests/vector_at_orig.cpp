#include "../ClassTest.hpp"
#include <vector>
#include <string.h>

int	main(void) {

	std::cout << "\n------------AT------------\n" << std::endl;
	ClassTest	a(2);
	ClassTest	b(6);

	std::vector<int> int_vector;
	std::vector<float> float_vector;
	std::vector<std::string> string_vector;
	std::vector<ClassTest> class_vector;
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------reserve 4-----\n" << std::endl;
	int_vector.reserve(4);
	float_vector.reserve(4);
	string_vector.reserve(4);
	class_vector.reserve(4);
	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<ft int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<ft int> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	

	std::cout << "\n--at--" << std::endl;
	int_vector.push_back(2);
	float_vector.push_back(2);
	string_vector.push_back("Ana 2");
	class_vector.push_back(a);
	std::cout << "at: " << int_vector.at(0) << std::endl;
	std::cout << "at: " << float_vector.at(0) << std::endl;
	std::cout << "at: " << string_vector.at(0) << std::endl;
	std::cout << "at: " << class_vector.at(0) << std::endl;

	int_vector.push_back(4);
	float_vector.push_back(4.1);
	string_vector.push_back("Ana 4");
	class_vector.push_back(a);
	std::cout << "at: " << int_vector.at(1) << std::endl;
	std::cout << "at: " << float_vector.at(1) << std::endl;
	std::cout << "at: " << string_vector.at(1) << std::endl;
	std::cout << "at: " << class_vector.at(1) << std::endl;

//	std::cout << "at: " << class_orig.at(2) << std::endl;
//	std::cout << "at: " << int_vector.at(2) << std::endl;
//	std::cout << "at: " << class_vector.at(2) << std::endl;
}