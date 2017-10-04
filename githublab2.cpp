#include <iostream>


void square(int val);
int main()
{
	square(12);
	return 0;
}

void square(int val)
{
	std::cout << val*val << std::endl;
}