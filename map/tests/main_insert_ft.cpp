#include "../map.hpp"
#include "../RbTree.hpp"
#include "../node_base.hpp"


int main(void) {

	ft::map<int, std::string> ft_map;

	std::cout << "size map: " << ft_map.size() << std::endl;

	ft::pair<int, std::string>	val1(1, "one");
	ft::pair<int, std::string>	val2(2, "two");
	ft::pair<int, std::string>	val4(4, "four");
	ft::pair<int, std::string>	val5(5, "five");
	ft::pair<int, std::string>	val6(6, "six");
	ft::pair<int, std::string>	val7(7, "seven");
	ft::pair<int, std::string>	val8(8, "eight");
	

	ft::pair<ft::map<int, std::string>::iterator, bool>	it;
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
	
	ft::map<int, std::string>::iterator	it2;
	ft::map<int, std::string> ft_map2;
	ft_map2.insert(ft_map.begin(), ft_map.end());

	for (it2 = ft_map2.begin(); it2 != ft_map2.end(); it2++)
	{
		std::cout << it2->second << std::endl;
	}

	std::cout << "\n------------INSERT HINT---------------\n";

	ft::pair<int, std::string>	val3(3, "three");
	ft::pair<int, std::string>	val9(9, "nine");
	
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