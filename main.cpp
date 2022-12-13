#include "ClassTest.hpp"
#include <vector>
#include "vector.hpp"

//#ifdef STD
//namespace ft = std;
//#else
//#include "vector.hpp"
//#endif

//static void	vector_resize(void);
//static void	vector_reserve(void);
//static void	vector_push_back(void);
//static void	vector_at(void);
//static void	vector_back(void);
//static void	vector_front(void);
//static void	vector_pop_back(void);
static void	vector_end(void);

int	main(void) {

	vector_end();
	return (0);
}
/*
static void	vector_resize(void) {
	
	std::cout << "\n------------Constructor------------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	std::vector<int> int_orig;
	std::vector<float> float_orig;
	std::vector<ClassTest> class_orig;
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	ft::vector<int> int_vector;
	ft::vector<float> float_vector;
	ft::vector<ClassTest> class_vector;
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
	std::cout << "\n------resize 1------\n" << std::endl;
	
	std::cout << "--orig--" << std::endl;
	int_orig.resize(1);
	float_orig.resize(1);
	class_orig.resize(1);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	int_vector.resize(1);
	float_vector.resize(1);
	class_vector.resize(1);
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
	std::cout << "\n------resize 2------\n" << std::endl;
	
	std::cout << "--orig--" << std::endl;
	int_orig.resize(2);
	float_orig.resize(2);
	class_orig.resize(2);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	int_vector.resize(2);
	float_vector.resize(2);
	class_vector.resize(2);
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
	std::cout << "\n------resize 5------\n" << std::endl;
	
	std::cout << "--orig--" << std::endl;
	int_orig.resize(5);
	float_orig.resize(5);
	class_orig.resize(5);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	int_vector.resize(5);
	float_vector.resize(5);
	class_vector.resize(5);
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
	std::cout << "\n------resize 1------\n" << std::endl;
	
	std::cout << "--orig--" << std::endl;
	int_orig.resize(1);
	float_orig.resize(1);
	class_orig.resize(1);
	std::cout << "\n<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "\n<int> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "\n<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	int_vector.resize(1);
	float_vector.resize(1);
	class_vector.resize(1);
	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<ft int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------resize 0------\n" << std::endl;
	
	std::cout << "--orig--" << std::endl;
	int_orig.resize(0);
	float_orig.resize(0);
	class_orig.resize(0);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	int_vector.resize(0);
	float_vector.resize(0);
	class_vector.resize(0);
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

}

static void	vector_reserve(void) {
	std::cout << "\n------------Constructor------------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	std::vector<int> int_orig;
	std::vector<float> float_orig;
	std::vector<ClassTest> class_orig;
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<int> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	
	std::cout << "--ft--" << std::endl;
	ft::vector<int> int_vector;
	ft::vector<float> float_vector;
	ft::vector<ClassTest> class_vector;
	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<ft int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------reserve 1-----\n" << std::endl;
	
	std::cout << "--orig--" << std::endl;
	int_orig.reserve(1);
	float_orig.reserve(1);
	class_orig.reserve(1);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<int> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	int_vector.reserve(1);
	float_vector.reserve(1);
	class_vector.reserve(1);
	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<ft int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------reserve 3-----\n" << std::endl;
	
	std::cout << "--orig--" << std::endl;
	int_orig.reserve(3);
	float_orig.reserve(3);
	class_orig.reserve(3);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<int> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	int_vector.reserve(3);
	float_vector.reserve(3);
	class_vector.reserve(3);
	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<ft int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------reserve 2-----\n" << std::endl;
	
	std::cout << "--orig--" << std::endl;
	int_orig.reserve(2);
	float_orig.reserve(2);
	class_orig.reserve(2);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<int> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	int_vector.reserve(2);
	float_vector.reserve(2);
	class_vector.reserve(2);
	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<ft int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
	std::cout << "\n------reserve 4-----\n" << std::endl;
	
	std::cout << "--orig--" << std::endl;
	int_orig.reserve(4);
	float_orig.reserve(4);
	class_orig.reserve(4);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<int> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	int_vector.reserve(4);
	float_vector.reserve(4);
	class_vector.reserve(4);
	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<ft int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------reserve 2-----\n" << std::endl;
	
	std::cout << "--orig--" << std::endl;
	int_orig.reserve(2);
	float_orig.reserve(2);
	class_orig.reserve(2);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<int> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	int_vector.reserve(2);
	float_vector.reserve(2);
	class_vector.reserve(2);
	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<ft int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

}

static void vector_push_back(void) {
	
	std::cout << "\n------------Constructor------------\n" << std::endl;

	ClassTest	a(2);
	ClassTest	b(6);

	std::cout << "--orig--" << std::endl;
	std::vector<int> int_orig;
	std::vector<float> float_orig;
	std::vector<ClassTest> class_orig;
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	
	std::cout << "--ft--" << std::endl;
	ft::vector<int> int_vector;
	ft::vector<float> float_vector;
	ft::vector<ClassTest> class_vector;
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------int push_back1------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	int_orig.push_back(12);
	float_orig.push_back(12.1);
	class_orig.push_back(a);
	std::cout << int_orig[0] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[0] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << class_orig[0] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(12);
	float_vector.push_back(12.1);
	class_vector.push_back(a);
	std::cout << int_vector[0] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[0] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << class_vector[0] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
	std::cout << "\n------int push_back2------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	int_orig.push_back(14);
	float_orig.push_back(14.1);
	class_orig.push_back(a);
	std::cout << int_orig[1] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[1] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << class_orig[1] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(14);
	float_vector.push_back(14.1);
	class_vector.push_back(a);
	std::cout << int_vector[1] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[1] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << class_vector[1] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	

	std::cout << "\n--resize 5--" << std::endl;
	std::cout << "--orig--" << std::endl;
	int_orig.resize(5);
	float_orig.resize(5);
	class_orig.resize(5);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	int_vector.resize(5);
	float_vector.resize(5);
	class_vector.resize(5);
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------push_back after resize------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	int_orig.push_back(10);
	float_orig.push_back(10.1);
	class_orig.push_back(a);
	std::cout << int_orig[5] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[5] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << class_orig[5] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(10);
	float_vector.push_back(10.1);
	class_vector.push_back(a);
	std::cout << int_vector[5] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[5] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << class_vector[5] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
}

static void	vector_at(void) {

	ClassTest	a(2);
	ClassTest	b(6);

	std::cout << "--orig--" << std::endl;
	std::vector<int> int_orig;
	std::vector<float> float_orig;
	std::vector<ClassTest> class_orig;
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	
	std::cout << "--ft--" << std::endl;
	ft::vector<int> int_vector;
	ft::vector<float> float_vector;
	ft::vector<ClassTest> class_vector;
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------reserve 4-----\n" << std::endl;
	
	std::cout << "--orig--" << std::endl;
	int_orig.reserve(4);
	float_orig.reserve(4);
	class_orig.reserve(4);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<int> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	int_vector.reserve(4);
	float_vector.reserve(4);
	class_vector.reserve(4);
	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<ft int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	

	std::cout << "\n--at--" << std::endl;
	
	std::cout << "\n--orig--" << std::endl;
	int_orig.push_back(2);
	class_orig.push_back(a);
	std::cout << "at: " << int_orig.at(0) << std::endl;
	std::cout << "at: " << class_orig.at(0) << std::endl;
	
	
	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(2);
	class_vector.push_back(a);
	std::cout << "at: " << int_vector.at(0) << std::endl;
	std::cout << "at: " << class_vector.at(0) << std::endl;

//	std::cout << "at: " << int_orig.at(2) << std::endl;
//	std::cout << "at: " << class_orig.at(2) << std::endl;
//	std::cout << "at: " << int_vector.at(2) << std::endl;
//	std::cout << "at: " << class_vector.at(2) << std::endl;
}

static void	vector_back(void) {

	std::cout << "\n------------Constructor------------\n" << std::endl;

	ClassTest	a(7);
	ClassTest	b(9);

	std::cout << "--orig--" << std::endl;
	std::vector<int> int_orig;
	std::vector<float> float_orig;
	std::vector<ClassTest> class_orig;
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	
	std::cout << "--ft--" << std::endl;
	ft::vector<int> int_vector;
	ft::vector<float> float_vector;
	ft::vector<ClassTest> class_vector;
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

		std::cout << "\n------reserve 4-----\n" << std::endl;
	
	std::cout << "--orig--" << std::endl;
	int_orig.reserve(4);
	float_orig.reserve(4);
	class_orig.reserve(4);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<int> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	int_vector.reserve(4);
	float_vector.reserve(4);
	class_vector.reserve(4);
	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<ft int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	
	std::cout << "\n--back--" << std::endl;
	
	std::cout << "\n--orig--" << std::endl;
	int_orig.push_back(2);
	float_orig.push_back(2.1);
	class_orig.push_back(2);
	int_orig.push_back(4);
	float_orig.push_back(4.1);
	class_orig.push_back(4);
	std::cout << "back: " << int_orig.back() << std::endl;
	std::cout << "back: " << float_orig.back() << std::endl;
	std::cout << "back: " << class_orig.back() << std::endl;
	
	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(2);
	float_vector.push_back(2.1);
	class_vector.push_back(2);
	int_vector.push_back(4);
	float_vector.push_back(4.1);
	class_vector.push_back(4);
	std::cout << "back: " << int_vector.back() << std::endl;
	std::cout << "back: " << float_vector.back() << std::endl;
	std::cout << "back: " << class_vector.back() << std::endl;
}


static void	vector_front(void) {

	std::cout << "\n------------Constructor------------\n" << std::endl;

	ClassTest	a(7);
	ClassTest	b(9);

	std::cout << "--orig--" << std::endl;
	std::vector<int> int_orig;
	std::vector<float> float_orig;
	std::vector<ClassTest> class_orig;
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	
	std::cout << "--ft--" << std::endl;
	ft::vector<int> int_vector;
	ft::vector<float> float_vector;
	ft::vector<ClassTest> class_vector;
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

		std::cout << "\n------reserve 4-----\n" << std::endl;
	
	std::cout << "--orig--" << std::endl;
	int_orig.reserve(4);
	float_orig.reserve(4);
	class_orig.reserve(4);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<int> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	int_vector.reserve(4);
	float_vector.reserve(4);
	class_vector.reserve(4);
	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<ft int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	
	std::cout << "\n--front--" << std::endl;
	
	std::cout << "\n--orig--" << std::endl;
	int_orig.push_back(2);
	float_orig.push_back(2.1);
	class_orig.push_back(2);
	int_orig.push_back(4);
	float_orig.push_back(4.1);
	class_orig.push_back(4);
	std::cout << "back: " << int_orig.front() << std::endl;
	std::cout << "front: " << float_orig.front() << std::endl;
	std::cout << "front: " << class_orig.front() << std::endl;
	
	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(2);
	float_vector.push_back(2.1);
	class_vector.push_back(2);
	int_vector.push_back(4);
	float_vector.push_back(4.1);
	class_vector.push_back(4);
	std::cout << "front: " << int_vector.front() << std::endl;
	std::cout << "front: " << float_vector.front() << std::endl;
	std::cout << "front: " << class_vector.front() << std::endl;
	
}

static void	vector_pop_back(void) {

	std::cout << "\n------------Constructor------------\n" << std::endl;

	ClassTest	a(7);
	ClassTest	b(9);

	std::cout << "--orig--" << std::endl;
	std::vector<int> int_orig;
	std::vector<float> float_orig;
	std::vector<ClassTest> class_orig;
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	
	std::cout << "--ft--" << std::endl;
	ft::vector<int> int_vector;
	ft::vector<float> float_vector;
	ft::vector<ClassTest> class_vector;
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

		std::cout << "\n------reserve 4-----\n" << std::endl;
	
	std::cout << "--orig--" << std::endl;
	int_orig.reserve(4);
	float_orig.reserve(4);
	class_orig.reserve(4);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<int> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	int_vector.reserve(4);
	float_vector.reserve(4);
	class_vector.reserve(4);
	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<ft int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n--push_back--" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	int_orig.push_back(2);
	float_orig.push_back(2.1);
	class_orig.push_back(2);
	int_orig.push_back(4);
	float_orig.push_back(4.1);
	class_orig.push_back(4);
	std::cout << int_orig.back() << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig.back() << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "back: " << class_orig.back() << " <class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	
	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(2);
	float_vector.push_back(2.1);
	class_vector.push_back(2);
	int_vector.push_back(4);
	float_vector.push_back(4.1);
	class_vector.push_back(4);
	class_vector.push_back(6);
	std::cout << int_vector.back() << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector.back() << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "back: " << class_vector.back() << " <class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
	std::cout << "\n--pop_back--" << std::endl;
	
	std::cout << "\n--orig--" << std::endl;
	int_orig.pop_back();
	float_orig.pop_back();
	class_orig.pop_back();
	std::cout << int_orig.back() << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig.back() << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "back: " << class_orig.back() << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;	

	std::cout << "\n--ft--" << std::endl;
	int_vector.pop_back();
	float_vector.pop_back();
	class_vector.pop_back();
	std::cout << int_vector.back() << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector.back() << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "back: " << class_vector.back() << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n--pop_back 2--" << std::endl;
	
	std::cout << "\n--orig--" << std::endl;
	int_orig.pop_back();
	float_orig.pop_back();
	class_orig.pop_back();

	std::cout << "\n--ft--" << std::endl;
	int_vector.pop_back();
	float_vector.pop_back();
	class_vector.pop_back();
}
*/
static void	vector_end(void) {

	std::cout << "\n------------Constructor------------\n" << std::endl;

	ClassTest	a(2);
	ClassTest	b(6);

	std::cout << "--orig--" << std::endl;
	std::vector<int> int_orig;
	std::vector<float> float_orig;
	std::vector<ClassTest> class_orig;
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	ft::vector<int> int_vector;
	ft::vector<float> float_vector;
	ft::vector<ClassTest> class_vector;
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
	std::cout << "\n------reserve 5-----\n" << std::endl;
	
	std::cout << "--orig--" << std::endl;
	int_orig.reserve(5);
	float_orig.reserve(5);
	class_orig.reserve(5);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<int> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	int_vector.reserve(5);
	float_vector.reserve(5);
	class_vector.reserve(5);
	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<ft int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------int push_back1------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	int_orig.push_back(12);
	float_orig.push_back(12.1);
	class_orig.push_back(a);
	std::cout << int_orig[0] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[0] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << class_orig[0] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(12);
	float_vector.push_back(12.1);
	class_vector.push_back(a);
	std::cout << int_vector[0] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[0] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << class_vector[0] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
	std::cout << "\n------int push_back2------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	int_orig.push_back(14);
	float_orig.push_back(14.1);
	class_orig.push_back(b);
	std::cout << int_orig[1] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[1] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << class_orig[1] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(14);
	float_vector.push_back(14.1);
	class_vector.push_back(b);
	std::cout << int_vector[1] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[1] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << class_vector[1] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------end------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	for(std::vector<int>::iterator it = int_orig.begin(); it != int_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout << "----" << std::endl;
	for(std::vector<float>::iterator it = float_orig.begin(); it != float_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout << "----" << std::endl;
	for(std::vector<ClassTest>::iterator it = class_orig.begin(); it != class_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	
	std::cout << "\n--ft--" << std::endl;
	for(ft::vector<int>::iterator it = int_vector.begin(); it != int_vector.end(); it++) {
		std::cout << *it << std::endl;
	}

	std::cout << "----" << std::endl;
	for(ft::vector<float>::iterator it = float_vector.begin(); it != float_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout << "----" << std::endl;
	for(ft::vector<ClassTest>::iterator it = class_vector.begin(); it != class_vector.end(); it++) {
		std::cout << *it << std::endl;
	}

}