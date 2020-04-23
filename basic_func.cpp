#include <string>
#include <iostream>


int func(int length, int width);

int main()
{

	int instance_func = func(2, 3);
	std::cout << "Here is the value of func: " << instance_func << std::endl;

	return 0;
}
