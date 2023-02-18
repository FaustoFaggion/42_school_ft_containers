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
	

	std::pair<std::map<int, std::string>::iterator, bool>	it;
	std::cout << "\n---------------------------\n";
	it = ft_map.insert(val1);
	 std::cout << "it value: " << it.first->second << " bool: " <<it.second << std::endl;
	
	std::cout << "\n---------------------------\n";
	it = ft_map.insert(val2);
	 std::cout << "it value: " << it.first->second << " bool: " <<it.second << std::endl;

	std::cout << "\n---------------------------\n";
	it =  ft_map.insert(val3);
	std::cout << "it value: " << it.first->second << " bool: " <<it.second << std::endl;

	std::cout << "\n---------------------------\n";
	it =  ft_map.insert(val4);
	std::cout << "it value: " << it.first->second << " bool: " <<it.second << std::endl;

	std::cout << "\n---------------------------\n";
	it =  ft_map.insert(val5);
	std::cout << "it value: " << it.first->second << " bool: " <<it.second << std::endl;

	std::cout << "\n---------------------------\n";
	it =  ft_map.insert(val6);
	std::cout << "it value: " << it.first->second << " bool: " <<it.second << std::endl;

	std::cout << "\n---------------------------\n";
	it =  ft_map.insert(val7);
	std::cout << "it value: " << it.first->second << " bool: " <<it.second << std::endl;

	std::cout << "\n---------------------------\n";
	it =  ft_map.insert(val8);
	std::cout << "it value: " << it.first->second << " bool: " <<it.second << std::endl;

	std::cout << "\n---------------------------\n";
	it =  ft_map.insert(val4);
	std::cout << "it value: " << it.first->second << " bool: " <<it.second << std::endl;

	std::cout << "\n---------Range Constructor----------\n";
	
	std::map<int, std::string>::iterator	it2;
	std::map<int, std::string> ft_map2(ft_map.begin(), ft_map.end());

	for (it2 = ft_map2.begin(); it2 != ft_map2.end(); it2++)
	{
		std::cout << it2->second << std::endl;
	}

	std::cout << "\n---------Copy Constructor----------\n";

	std::map<int, std::string>	ft_map3(ft_map2);

	std::map<int, std::string>::iterator	it3;

	for (it3 = ft_map3.begin(); it3 != ft_map3.end(); it3++)
	{
		std::cout << it3->second << std::endl;
	}

	std::cout << "\n---------Operator = ----------\n";

	std::map<int, std::string>	ft_map4;

	std::map<int, std::string>::iterator	it4;

	ft_map4 = ft_map2;

	for (it4 = ft_map4.begin(); it4 != ft_map4.end(); it4++)
	{
		std::cout << it4->second << std::endl;
	}
}