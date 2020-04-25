#include <iostream>
#include <typeinfo>


int main()
{
	int a = 10;
	double b = 10;

	std::cout << "The type of a is: " << typeid(a) << std::endl;
	std::cout << "The type of a is: " << typeid(b) << std::endl;

	return 0;
}
