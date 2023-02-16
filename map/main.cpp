#include "map.hpp"
#include <map>
#include "RbTree.hpp"
#include "node_base.hpp"

int main(void) {

	ft::map<int, std::string> ft_map;

	std::cout << "size map: " << ft_map.size() << std::endl;

	ft::pair<int, std::string>	val1(1, "one");
	ft::pair<int, std::string>	val2(2, "two");
	ft::pair<int, std::string>	val3(3, "three");
	ft::pair<int, std::string>	val4(4, "four");
	ft::pair<int, std::string>	val5(5, "five");
	ft::pair<int, std::string>	val6(6, "six");
	ft::pair<int, std::string>	val7(7, "seven");
	ft::pair<int, std::string>	val8(8, "eight");
	ft::pair<int, std::string>	val9(9, "nine");
	

	ft_map.insert(val2);
	ft_map.insert(val3);
	ft_map.insert(val4);
	ft_map.insert(val5);
	ft_map.insert(val6);
	ft_map.insert(val7);

	ft::map<int, std::string>::iterator	it;
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
	std::cout << "\n---------------------------\n";
	it = ft_map.begin();
	std::cout << "begin: " << it->second << std::endl;
	std::cout << "\n\n";
	it = ft_map.end();
	std::cout << "end: " << it->second << std::endl;

	std::cout << "operator []: " << ft_map[12] << std::endl;

	ft_map[12] = "twelve";
	std::cout << "operator []: " << ft_map[12] << std::endl;
	
	std::cout << "at: " << (ft_map.at(12)) << std::endl;
	try 
	{
		std::cout << "at: " << (ft_map.at(14)) << std::endl;
	}
	catch (std::out_of_range& e)
	{
		std::cout << e.what() << std::endl;
	}

	for (it = ft_map.begin(); it != ft_map.end(); it++)
	{
		std::cout << it->second << std::endl;
	}
}