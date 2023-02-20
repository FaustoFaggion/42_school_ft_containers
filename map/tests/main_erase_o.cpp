#include <iostream>
#include <cstring>
#include <map>


int main(void)
{
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

	std::cout << "\n---------------------------\n";
	
	std::cout << "\n---------MAP TREE----------\n";
	
	std::map<int, std::string>::iterator	it2;
	for (it2 = ft_map.begin(); it2 != ft_map.end(); it2++)
		std::cout << it2->first << " : " << it2->second << std::endl;


	std::cout << "\n---------ERASE 2----------\n";
	ft_map.erase(1);
	for (it2 = ft_map.begin(); it2 != ft_map.end(); it2++)
		std::cout << it2->first << " : " << it2->second << std::endl;
	
	std::cout << "\n---------ERASE 5----------\n";
	ft_map.erase(5);
	for (it2 = ft_map.begin(); it2 != ft_map.end(); it2++)
		std::cout << it2->first << " : " << it2->second << std::endl;

	std::cout << "\n---------ERASE begin()----------\n";
	ft_map.erase(ft_map.begin());
	for (it2 = ft_map.begin(); it2 != ft_map.end(); it2++)
		std::cout << it2->first << " : " << it2->second << std::endl;
	
	std::cout << "\n---------ERASE begin() 2----------\n";
	ft_map.erase(ft_map.begin());
	for (it2 = ft_map.begin(); it2 != ft_map.end(); it2++)
		std::cout << it2->first << " : " << it2->second << std::endl;

	std::cout << "\n---------ERASE Range----------\n";
	it2 = ft_map.begin();
	it2++;
	it2++;
	ft_map.erase(ft_map.begin(), it2);

	for (it2 = ft_map.begin(); it2 != ft_map.end(); it2++)
		std::cout << it2->first << " : " << it2->second << std::endl;

}