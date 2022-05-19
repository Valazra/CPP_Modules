#include "easyfind.hpp"

int main(void)
{
	std::cout << "****************************************" << std::endl << std::endl ;

	std::list<int> list;
	
	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);
	
	std::cout << "List 1 created " << std::endl << "Her values are :  ";
	for (std::list<int>::const_iterator it = list.begin(), end = list.end(); it != end ; it++)
		std::cout << *it << "  ";
	
	std::cout << std::endl << std::endl << "****************************************" << std::endl << std::endl ;

	std::cout << "Function easyfind : " << std::endl;
	try
	{
		std::cout << "*easyfind(list, 1) = " << *easyfind(list, 1) << std::endl; 
		std::cout << "*easyfind(list, 3) = " << *easyfind(list, 3) << std::endl; 
		std::cout << "*easyfind(list, 5) = " << *easyfind(list, 5) << std::endl; 
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl << "****************************************" << std::endl << std::endl;

	std::list<int> list2;

	list2.push_back(5);
	list2.push_back(10);
	list2.push_back(15);
	list2.push_back(20);

	std::cout << "List 2 created " << std::endl << "Her values are :  ";
	for (std::list<int>::const_iterator it = list2.begin(), end = list2.end(); it != end ; it++)
		std::cout << *it << "  ";
	
	std::cout << std::endl << std::endl << "****************************************" << std::endl << std::endl ;

	std::cout << "Function easyfind : " << std::endl;
	try
	{
		std::cout << "*easyfind(list2, 10) = " << *easyfind(list2, 10) << std::endl; 
		std::cout << "*easyfind(list2, 5) = " << *easyfind(list2, 5) << std::endl; 
		std::cout << "*easyfind(list2, 12) = " << *easyfind(list2, 12) << std::endl; 
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl << "****************************************" << std::endl << std::endl ;

	return (0);
}
