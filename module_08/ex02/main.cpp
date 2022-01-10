#include "MutantStack.hpp"
#include <vector>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	{
		std::vector<float> test_vec(10, 5.5);
		std::stack<float, std::vector<float> > s2(test_vec);
		MutantStack<float, std::vector<float> > mstack2(s2);
		MutantStack<float, std::vector<float> >::iterator it2 = mstack2.begin();
		MutantStack<float, std::vector<float> >::iterator ite2 = mstack2.end();
		while (it2 != ite2)
		{
			std::cout << *it2 << std::endl;
			++it2;
		}
	}
	{
		std::vector<float> test_vec(10, 5.5);
		std::stack<float, std::vector<float> > s2(test_vec);
		MutantStack<float, std::vector<float> > mstack2 = s2;
		MutantStack<float, std::vector<float> >::iterator it2 = mstack2.begin();
		MutantStack<float, std::vector<float> >::iterator ite2 = mstack2.end();
		while (it2 != ite2)
		{
			std::cout << *it2 << std::endl;
			++it2;
		}
	}
	return 0;
}