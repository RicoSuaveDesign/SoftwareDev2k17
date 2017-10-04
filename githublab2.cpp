#include <iostream>


void power(int base, int expon);
int main()
{
	power(10, 5);
	power(2, 8);
	
	return 0;
}

void power(int base, int expon)
{
	int finalVal = base;
	for (int i = 0; i < expon; i++)
	{
		finalVal *= base;
	}
	std::cout << finalVal << std::endl;
}