#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "last in : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size : " << mstack.size() << std::endl;
	mstack.push(3); mstack.push(5); mstack.push(737); //[...] mstack.push(0);
	std::cout << "size : " << mstack.size() << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	it = mstack.begin();
	--ite;
	while (it != ite) {
		std::cout << *ite << std::endl;
		--ite;
	}
	std::cout << *ite << std::endl;
	std::stack<int> s(mstack);
	s.push(42);
	mstack = s;
	std::cout << *(mstack.end() - 1) << std::endl;
	return 0;
}