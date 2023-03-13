#include <iostream>
#include <map>
#include <cstring>


int main(void) {

	std::map<int, std::string> ft_map;

	std::cout << "size map: " << ft_map.size() << std::endl;

	std::pair<int, std::string>	val1(1, "one");
	std::pair<int, std::string>	val2(2, "two");
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

	std::cout << "\n---------Insert Range----------\n";
	
	std::map<int, std::string>::iterator	it2;
	std::map<int, std::string> ft_map2;
	ft_map2.insert(ft_map.begin(), ft_map.end());

	for (it2 = ft_map2.begin(); it2 != ft_map2.end(); it2++)
	{
		std::cout << it2->second << std::endl;
	}

	std::cout << "\n------------INSERT HINT---------------\n";

	std::pair<int, std::string>	val3(3, "three");
	std::pair<int, std::string>	val9(9, "nine");
	
	it =  ft_map.insert(val3);
	std::cout << "it value: " << it.first->second << " bool: " <<it.second << std::endl;
	
	it =  ft_map.insert(val9);
	std::cout << "it value: " << it.first->second << " bool: " <<it.second << std::endl;

	it2 = ft_map.end();

	ft_map.insert(it2, val8);

	for (it2 = ft_map.begin(); it2 != ft_map.end(); it2++)
	{
		std::cout << it2->second << std::endl;
	}

	std::cout << "\n";
	it2 = ft_map.begin();
	it2++;

	std::cout << "it2: " << it2->second << "\n";

	ft_map.insert(it2, val3);

	for (it2 = ft_map.begin(); it2 != ft_map.end(); it2++)
	{
		std::cout << it2->second << std::endl;
	}

}