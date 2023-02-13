#include "map.hpp"
#include <map>
#include "RbTree.hpp"
#include "node_base.hpp"
#include "ClassTest.hpp"

int main(void) {

	ft::map<int, ClassTest> ft_map;

	std::cout << "size map: " << ft_map.size() << std::endl;

	ft::pair<int, ClassTest>	val1(1, ClassTest(11));
	ft::pair<int, ClassTest>	val2(2, ClassTest(12));
	ft::pair<int, ClassTest>	val3(3, ClassTest(13));
	ft::pair<int, ClassTest>	val4(4, ClassTest(14));
	ft::pair<int, ClassTest>	val5(5, ClassTest(15));
	ft::pair<int, ClassTest>	val6(6, ClassTest(16));
	ft::pair<int, ClassTest>	val7(7, ClassTest(17));
	ft::pair<int, ClassTest>	val8(8, ClassTest(18));
	ft::pair<int, ClassTest>	val9(9, ClassTest(19));
	

	ft_map.insert(val2);
	ft_map.insert(val3);
	ft_map.insert(val4);
	ft_map.insert(val5);
	ft_map.insert(val6);
	ft_map.insert(val7);
	ft_map.print_map();
	ft::map<int, ClassTest>::iterator	it;
	std::cout << "\n---------------------------\n";
	it = ft_map.begin();
	std::cout << "begin: " << it->second << std::endl;
	std::cout << "\n\n";
	it = ft_map.end();
	std::cout << "end: " << it->second << std::endl;

	std::cout << "\n---------------------------\n";
	ft_map.insert(val1);
	ft_map.insert(val8);
	ft_map.insert(val9);
	ft_map.print_map();
	std::cout << "\n---------------------------\n";
	it = ft_map.begin();
	std::cout << "begin: " << it->second << std::endl;
	std::cout << "\n\n";
	it = ft_map.end();
	std::cout << "end: " << it->second << std::endl;

}