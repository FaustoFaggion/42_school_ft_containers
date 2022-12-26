#include "../ClassTest.hpp"
#include <vector>
#include <string.h>

int	main(void) {
	

	std::cout << "\n------------RESIZE------------\n" << std::endl;

	std::cout << "\n------------Constructor------------\n" << std::endl;
	std::vector<int> int_vector;
	std::vector<float> float_vector;
	std::vector<ClassTest> class_vector;
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------resize 1------\n" << std::endl;	
	int_vector.resize(1);
	float_vector.resize(1);
	class_vector.resize(1);
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
	std::cout << "\n------resize 2------\n" << std::endl;
	int_vector.resize(2);
	float_vector.resize(2);
	class_vector.resize(2);
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
	std::cout << "\n------resize 5------\n" << std::endl;
	int_vector.resize(5);
	float_vector.resize(5);
	class_vector.resize(5);
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
	std::cout << "\n------resize 1------\n" << std::endl;
	int_vector.resize(1);
	float_vector.resize(1);
	class_vector.resize(1);
	std::cout << "\n<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "\n<int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "\n<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------resize 0------\n" << std::endl;
	int_vector.resize(0);
	float_vector.resize(0);
	class_vector.resize(0);
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	return (0);
}