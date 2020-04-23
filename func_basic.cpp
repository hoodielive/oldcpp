#include <iostream>
#include <cstdio>


int func_basic(int length, int width) 
{
    printf("length is: %d and width is: %d\n ", length, width);
    return 0;
}

int main()
{
    func_basic(2, 3);

    std::cout << "This is the value of function: " << &func_basic << std::endl;

    return 0;
}