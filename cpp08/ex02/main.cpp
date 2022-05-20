#include "MutantStack.hpp"

int main(void)
{
	std::cout << std::endl << "********************************" << std::endl << std::endl;

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);	
	mstack.push(5);	
	mstack.push(737);	
	mstack.push(0);

	MutantStack<int>::it it = mstack.begin();
	MutantStack<int>::it ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << std::endl << "********************************" << std::endl << std::endl;
/*	
	std::list<int> mstack;

	mstack.push_back(5);
	mstack.push_back(17);

	std::cout << mstack.back() << std::endl;

	mstack.pop_back();

	std::cout << mstack.size() << std::endl;

	mstack.push_back(3);	
	mstack.push_back(5);	
	mstack.push_back(737);	
	mstack.push_back(0);

	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << std::endl << "********************************" << std::endl << std::endl;
*/
	MutantStack<std::string> string_stack;
	
	string_stack.push("Je");
	string_stack.push("m'appelle");
	string_stack.push("Valentin");

	std::cout << "Creation of a string_stack 'Je m'appelle Valentin' with size : " << string_stack.size() << std::endl;
	std::cout << "Her top value is : " << string_stack.top() << std::endl;
	
	std::cout << std::endl << "We add now some other values. " << std::endl;

	string_stack.push("et");
	string_stack.push("je");
	string_stack.push("suis");
	string_stack.push("etudiant !");

	std::cout << std::endl << "New stack is 'Je m'appelle Valentin et je suis etudiant !' and new size is : " << string_stack.size() << std::endl;
	std::cout << "New top value is : " << string_stack.top() << std::endl;

	std::cout << std::endl << "Now we use pop to delete the top element." << std::endl;

	string_stack.pop();

	std::cout << std::endl << "New size is : " << string_stack.size() << std::endl;
	std::cout << "New top value is : " << string_stack.top() << std::endl;

	std::cout << std::endl << "********************************" << std::endl << std::endl;

	return (0);
}
