#include "ClassTest.hpp"
#include <vector>

#ifdef STD
namespace ft = std;
#else
#include "vector.hpp"
#endif

//static void	vector_resize(void);
//static void	vector_reserve(void);
static void	vector_push_back(void);
//static void	vector_at(void);
//static void	vector_back(void);
//static void	vector_front(void);
//static void	vector_pop_back(void);

int	main(void) {

	vector_push_back();



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
	std::vector<float> float_vector;
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
*/

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
	std::vector<float> float_vector;
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
/*
static void	vector_at(void) {

	ClassTest	a(7);
	ClassTest	b(9);

	std::cout << "--int--" << std::endl;
	std::vector<int> int_orig;
	ft::vector<int> int_vector;
	
	std::cout << "\n--ClassTest--" << std::endl;
	std::cout << "--orig--" << std::endl;
	std::vector<ClassTest> class_orig;
	std::cout << "--ft--" << std::endl;
	ft::vector<ClassTest> class_vector;


	std::cout << "\n--size(5)--" << std::endl;
	std::cout << "\n--int size(5)--" << std::endl;
	int_orig.resize(5);
	int_vector.resize(5);	
	std::cout << "\n--class size(5)--" << std::endl;
	std::cout << "--orig--" << std::endl;
	class_orig.resize(5);
	std::cout << "--ft--" << std::endl;
	class_vector.resize(5);
	std::cout << "\n--size(1)--" << std::endl;
	std::cout << "\n--int size(1)--" << std::endl;
	int_orig.resize(1);
	int_vector.resize(1);
	std::cout << "\n--class size(1)--" << std::endl;
	std::cout << "--orig--" << std::endl;
	class_orig.resize(1);
	std::cout << "--ft--" << std::endl;
	class_vector.resize(1);

	std::cout << "\n--at--" << std::endl;
	
	std::cout << "\n--int--" << std::endl;
	int_orig.push_back(2);
	int_vector.push_back(3);
	std::cout << "\n--ft--" << std::endl;
	class_orig.push_back(4);
	class_vector.push_back(5);

	std::cout << "at: " << int_orig.at(1) << std::endl;
	std::cout << "at: " << int_vector.at(1) << std::endl;
	std::cout << "at: " << class_orig.at(1) << std::endl;
	std::cout << "at: " << class_vector.at(1) << std::endl;
}

static void	vector_back(void) {

	std::cout << "\n------------Constructor------------\n" << std::endl;

	ClassTest	a(7);
	ClassTest	b(9);

	std::cout << "--int--" << std::endl;
	std::vector<int> int_orig;
	ft::vector<int> int_vector;
	
	std::cout << "\n--ClassTest--" << std::endl;
	std::cout << "--orig--" << std::endl;
	std::vector<ClassTest> class_orig;
	std::cout << "--ft--" << std::endl;
	ft::vector<ClassTest> class_vector;

	std::cout << "\n<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "\n<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n--size(5)--" << std::endl;
	std::cout << "\n--int size(5)--" << std::endl;
	int_orig.resize(5);
	int_vector.resize(5);	
	std::cout << "\n--class size(5)--" << std::endl;
	std::cout << "--orig--" << std::endl;
	class_orig.resize(5);
	std::cout << "--ft--" << std::endl;
	class_vector.resize(5);
	std::cout << "\n--size(1)--" << std::endl;
	std::cout << "\n--int size(1)--" << std::endl;
	int_orig.resize(1);
	int_vector.resize(1);
	std::cout << "\n--class size(1)--" << std::endl;
	std::cout << "--orig--" << std::endl;
	class_orig.resize(1);
	std::cout << "--ft--" << std::endl;
	class_vector.resize(1);

	std::cout << "\n--back--" << std::endl;
	
	std::cout << "\n--int--" << std::endl;
	int_orig.push_back(2);
	int_vector.push_back(3);
	std::cout << "\n--ft--" << std::endl;
	class_orig.push_back(4);
	class_vector.push_back(5);

	std::cout << "back: " << int_orig.back() << std::endl;
	std::cout << "back: " << int_vector.back() << std::endl;
	std::cout << "back: " << class_orig.back() << std::endl;
	std::cout << "back: " << class_vector.back() << std::endl;
}

static void	vector_front(void) {

	std::cout << "\n------------Constructor------------\n" << std::endl;

	ClassTest	a(7);
	ClassTest	b(9);

	std::cout << "--int--" << std::endl;
	std::vector<int> int_orig;
	ft::vector<int> int_vector;
	
	std::cout << "\n--ClassTest--" << std::endl;
	std::cout << "--orig--" << std::endl;
	std::vector<ClassTest> class_orig;
	std::cout << "--ft--" << std::endl;
	ft::vector<ClassTest> class_vector;

	std::cout << "\n<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "\n<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n--size(5)--" << std::endl;
	std::cout << "\n--int size(5)--" << std::endl;
	int_orig.resize(5);
	int_vector.resize(5);	
	std::cout << "\n--class size(5)--" << std::endl;
	std::cout << "--orig--" << std::endl;
	class_orig.resize(5);
	std::cout << "--ft--" << std::endl;
	class_vector.resize(5);
	std::cout << "\n--size(1)--" << std::endl;
	std::cout << "\n--int size(1)--" << std::endl;
	int_orig.resize(1);
	int_vector.resize(1);
	std::cout << "\n--class size(1)--" << std::endl;
	std::cout << "--orig--" << std::endl;
	class_orig.resize(1);
	std::cout << "--ft--" << std::endl;
	class_vector.resize(1);

	std::cout << "\n--front--" << std::endl;
	
	std::cout << "\n--int--" << std::endl;
	int_orig.push_back(2);
	int_vector.push_back(3);
	std::cout << "\n--ft--" << std::endl;
	class_orig.push_back(4);
	class_vector.push_back(5);

	std::cout << "front: " << int_orig.front() << std::endl;
	std::cout << "front: " << int_vector.front() << std::endl;
	std::cout << "front: " << class_orig.front() << std::endl;
	std::cout << "front: " << class_vector.front() << std::endl;
}
static void	vector_pop_back(void) {

	std::cout << "\n------------------VECTOR------------------\n" << std::endl;
	
	std::cout << "\n------------Constructor------------\n" << std::endl;

	ClassTest	a(7);
	ClassTest	b(9);

	std::cout << "--int--" << std::endl;
	std::vector<int> int_orig;
	ft::vector<int> int_vector;
	
	std::cout << "\n--ClassTest--" << std::endl;
	std::cout << "--orig--" << std::endl;
	std::vector<ClassTest> class_orig;
	std::cout << "--ft--" << std::endl;
	ft::vector<ClassTest> class_vector;

	std::cout << "\n<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "\n<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------int pop_back------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
//	int_orig.pop_back();
	int_orig.push_back(12);
	std::cout << "push_back(int: 12) vector[0]: " << int_orig[0] << " capacity: " << int_orig.capacity() << std::endl;
	int_orig.push_back(15);
	std::cout << "push_back(int: 15) vector[1]: " << int_orig[1] << " capacity: " << int_orig.capacity() << std::endl;
	int_orig.push_back(17);
	std::cout << "push_back(int: 17) vector[2]: " << int_orig[2] << " capacity: " << int_orig.capacity() << std::endl;
	int_orig.push_back(19);
	std::cout << "push_back(int: 19) vector[3]: " << int_orig[3] << " capacity: " << int_orig.capacity() << std::endl;
	int_orig.pop_back();
//	std::cout << "pop_back(int: 19) vector[3]: " << int_orig.at(3) << " capacity: " << int_orig.capacity() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	int_vector.pop_back();
	int_vector.push_back(12);
	std::cout << "push_back(int: 12) vector[0]: " << int_vector[0] << " capacity: " << int_vector.capacity() << std::endl;
	int_vector.push_back(15);
	std::cout << "push_back(int: 15) vector[1]: " << int_vector[1] << " capacity: " << int_vector.capacity() << std::endl;std::cout << "push_back(int: 12) vector[0]: " << int_vector[0] << " capacity: " << int_vector.capacity() << std::endl;
	int_vector.push_back(17);
	std::cout << "push_back(int: 17) vector[2]: " << int_vector[2] << " capacity: " << int_vector.capacity() << std::endl;
	int_vector.push_back(19);
	std::cout << "push_back(int: 19) vector[3]: " << int_vector[3] << " capacity: " << int_vector.capacity() << std::endl;
	int_vector.pop_back();
	std::cout << "push_back(int: 19) vector[3]: " << int_vector[3] << " capacity: " << int_vector.capacity() << std::endl;
	std::cout << "push_back(int: 19) vector[3]: " << int_vector.at(3) << " capacity: " << int_vector.capacity() << std::endl;
}
*/