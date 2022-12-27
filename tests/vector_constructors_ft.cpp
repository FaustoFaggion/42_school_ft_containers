#include "../ClassTest.hpp"
#include "../vector.hpp"
#include <string.h>

int	main(void) {


	std::cout << "\n------------Constructor fill 2------------\n" << std::endl;

	ft::vector<int> int_vector(4, 44);
	ft::vector<float> float_vector(4, 44.1);
	ft::vector<std::string> string_vector(4, "Ana");
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
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


	std::cout << "\n------------Constructor range 3------------\n" << std::endl;
	
	ft::vector<int> int_vector2(int_vector.begin(), int_vector.begin() + 2);
	ft::vector<float> float_vector2(float_vector.begin(), float_vector.begin() + 2);
	ft::vector<std::string> string_vector2(string_vector.begin(), string_vector.begin() + 2);
	std::cout << "<int> size: " << int_vector2.size() << " max_size: " << int_vector2.max_size() << " capacity: " << int_vector2.capacity() << " empty: " << int_vector2.empty() << std::endl;
	std::cout << "<float> size: " << float_vector2.size() << " max_size: " << float_vector2.max_size() << " capacity: " << float_vector2.capacity() << " empty: " << float_vector2.empty() << std::endl;
	std::cout << "<string> size: " << string_vector2.size() << " max_size: " << string_vector2.max_size() << " capacity: " << string_vector2.capacity() << " empty: " << string_vector2.empty() << std::endl;

	for (ft::vector<int>::iterator it_ = int_vector2.begin(); it_ != int_vector2.end(); it_++) {
		std::cout << *it_ << std::endl;
	}
	std::cout<< "<int> size: " << int_vector2.size() << " max_size: " << int_vector2.max_size() << " capacity: " << int_vector2.capacity() << " empty: " << int_vector2.empty() << std::endl;

	for (ft::vector<float>::iterator it = float_vector2.begin(); it != float_vector2.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<float> size: " << float_vector2.size() << " max_size: " << float_vector2.max_size() << " capacity: " << float_vector2.capacity() << " empty: " << float_vector2.empty() << std::endl;
	
	for (ft::vector<std::string>::iterator it = string_vector2.begin(); it != string_vector2.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<string> size: " << string_vector2.size() << " max_size: " << string_vector2.max_size() << " capacity: " << string_vector2.capacity() << " empty: " << string_vector2.empty() << std::endl;

	std::cout << "\n------------Constructor copy 4------------\n" << std::endl;
	
	ft::vector<int> int_vector3(int_vector);
	ft::vector<float> float_vector3(float_vector);
	ft::vector<std::string> string_vector3(string_vector);
	std::cout << "<int> size: " << int_vector3.size() << " max_size: " << int_vector3.max_size() << " capacity: " << int_vector3.capacity() << " empty: " << int_vector3.empty() << std::endl;
	std::cout << "<float> size: " << float_vector3.size() << " max_size: " << float_vector3.max_size() << " capacity: " << float_vector3.capacity() << " empty: " << float_vector3.empty() << std::endl;
	std::cout << "<string> size: " << string_vector3.size() << " max_size: " << string_vector3.max_size() << " capacity: " << string_vector3.capacity() << " empty: " << string_vector3.empty() << std::endl;

	for (ft::vector<int>::iterator it_ = int_vector3.begin(); it_ != int_vector3.end(); it_++) {
		std::cout << *it_ << std::endl;
	}
	std::cout<< "<int> size: " << int_vector3.size() << " max_size: " << int_vector3.max_size() << " capacity: " << int_vector3.capacity() << " empty: " << int_vector3.empty() << std::endl;

	for (ft::vector<float>::iterator it = float_vector3.begin(); it != float_vector3.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<float> size: " << float_vector3.size() << " max_size: " << float_vector3.max_size() << " capacity: " << float_vector3.capacity() << " empty: " << float_vector3.empty() << std::endl;
	
	for (ft::vector<std::string>::iterator it = string_vector3.begin(); it != string_vector3.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<string> size: " << string_vector3.size() << " max_size: " << string_vector3.max_size() << " capacity: " << string_vector3.capacity() << " empty: " << string_vector3.empty() << std::endl;


	std::cout << "\n------------Constructor fill 2------------\n" << std::endl;

	ClassTest	a(2);
	ClassTest	b(4);
	ClassTest	c(6);

	ft::vector<ClassTest> class_vector(4, a);
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	for (ft::vector<ClassTest>::iterator it = class_vector.begin(); it != class_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------------Constructor range 3------------\n" << std::endl;

	ft::vector<ClassTest> class_range(4, b);

	ft::vector<ClassTest> class_vector2(class_range.begin(), class_range.begin() + 2);
	for (ft::vector<ClassTest>::iterator it = class_vector2.begin(); it != class_vector2.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout << "<class> size: " << class_vector2.size() << " max_size: " << class_vector2.max_size() << " capacity: " << class_vector2.capacity() << " empty: " << class_vector2.empty() << std::endl;
	
	std::cout << "\n------------Constructor copy 4------------\n" << std::endl;

	ft::vector<ClassTest> class_vector3(class_vector);
	std::cout << "<class> size: " << class_vector3.size() << " max_size: " << class_vector3.max_size() << " capacity: " << class_vector3.capacity() << " empty: " << class_vector3.empty() << std::endl;
	for (ft::vector<ClassTest>::iterator it = class_vector3.begin(); it != class_vector3.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<class> size: " << class_vector3.size() << " max_size: " << class_vector3.max_size() << " capacity: " << class_vector3.capacity() << " empty: " << class_vector3.empty() << std::endl;

	return (0);
}