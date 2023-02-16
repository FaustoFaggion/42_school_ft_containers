#include <iostream>
#include <cstring>
#include <map>


int main(void) {

	std::map<int, std::string> ft_map;

	std::cout << "size map: " << ft_map.size() << std::endl;

	std::pair<int, std::string>	val1(1, "one");
	std::pair<int, std::string>	val2(2, "two");
	std::pair<int, std::string>	val3(3, "three");
	std::pair<int, std::string>	val4(4, "four");
	std::pair<int, std::string>	val5(5, "five");
	std::pair<int, std::string>	val6(6, "six");
	std::pair<int, std::string>	val7(7, "seven");
	std::pair<int, std::string>	val8(8, "eight");
	std::pair<int, std::string>	val9(9, "nine");
	

	ft_map.insert(val1);
	ft_map.insert(val2);
	ft_map.insert(val3);
	ft_map.insert(val4);
	ft_map.insert(val5);
	ft_map.insert(val6);
	ft_map.insert(val7);
	ft_map.insert(val8);
	ft_map.insert(val9);

	std::map<int, std::string>::iterator	it;
	
	for (it = ft_map.begin(); it != ft_map.end(); it++)
	{
		std::cout << it->second << std::endl;
	}

	std::cout << "size map: " << ft_map.size() << std::endl;

	ft_map.clear();

	std::cout << "size map: " << ft_map.size() << std::endl;

	std::cout << "\n--------------------\n";
	
	ft_map.insert(val1);
	ft_map.insert(val2);
	ft_map.insert(val3);
	ft_map.insert(val4);
	ft_map.insert(val5);
	ft_map.insert(val6);
	ft_map.insert(val7);
	ft_map.insert(val8);
	ft_map.insert(val9);

	for (it = ft_map.begin(); it != ft_map.end(); it++)
	{
		std::cout << it->second << std::endl;
	}

	std::cout << "size map: " << ft_map.size() << std::endl;

	ft_map.clear();

	std::cout << "size map: " << ft_map.size() << std::endl;
}