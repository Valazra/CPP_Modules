#include "Array.hpp"

class Test
{
	public : 
		Test(void) : _nb(350){}
		Test(int nb) : _nb(nb){}
		Test(Test const & src){_nb = src.getNb();}
		~Test(void){}
		Test & operator=(Test const & src){_nb = src.getNb();return (*this);}
		int getNb(void) const{return (_nb);};

	private : 
		int _nb;
};

std::ostream &operator<<(std::ostream & lhs, Test const &rhs)
{
	lhs << rhs.getNb();
	return (lhs);
}

int main(void)
{
	std::cout << "****************************************" << std::endl << std::endl;

	Array<int> array1;
	std::cout << "Array 1 (empty) created " << std::endl << "His size is : " << array1.size() << std::endl;

	std::cout << std::endl << "****************************************" << std::endl << std::endl ;

	Array<int> array2(5);
	std::cout << "Array 2 (arg size) created " << std::endl << "His size is : " << array2.size() << std::endl;
	std::cout << "Values of array2 by default are : ";
	for (unsigned int i = 0 ; i < array2.size() ; i++)
		std::cout << array2[i] << "  ";
	std::cout << std::endl << "Let's change these values : ";
	for (unsigned int i = 0 ; i < array2.size() ; i++)
	{
		array2[i] = i;
		std::cout << array2[i] << "  ";
	}

	std::cout << std::endl << std::endl << "****************************************" << std::endl << std::endl;
	
	Array<int> array3(array2);
	std::cout << "Array 3 (copy of array2) created " << std::endl << "His size is : " << array3.size() << std::endl;
	std::cout << "Values of array3 are : ";
	for (unsigned int i = 0 ; i < array3.size() ; i++)
		std::cout << array3[i] << "  ";
	
	std::cout << std::endl << std::endl << "****************************************" << std::endl << std::endl;

	const Array<const int> array4(5);
	std::cout << "Array 4 (const) created " << std::endl << "His size is : " << array4.size() << std::endl;
	std::cout << "Values of array4 are : ";
	for (unsigned int i = 0 ; i < array4.size() ; i++)
		std::cout << array4[i] << "  ";
	

	std::cout << std::endl << std::endl << "****************************************" << std::endl << std::endl;

	std::cout << "Let's test some exceptions : " << std::endl;
	try
	{
		std::cout << "array2[5] is : " << array2[5]; 
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "array3[-2] is : " << array3[-2]; 
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
std::cout << std::endl << "****************************************" << std::endl << std::endl;

	Array<Test> array5(3);	
	array5[0] = Test(1);
	array5[1] = Test(2);

	std::cout << "Array 5 (complexe type) created " << std::endl << "His size is : " << array5.size() << std::endl;
	std::cout << "Values of array5 are : ";
	for (unsigned int i = 0 ; i < array5.size() ; i++)
		std::cout << array5[i] << "  ";
	std::cout << std::endl << std::endl << "Let's test some exceptions : " << std::endl;
	try
	{
		std::cout << "array5[4] is : " << array5[4];
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "array5[-2] is : " << array5[-2];
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "****************************************" << std::endl; 

	return (0);
}
