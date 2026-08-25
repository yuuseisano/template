#include <iostream>


int max_int(int a, int b)
{
	return (a > b) ? a : b;
}

long max_long(long a, long b)
{
	return a > b ? a : b;
}

int max_float(float a, float b)
{
	return (a > b) ? a : b;
}

int main()
{
	float a = 10.1f;
	float b = 10.2f;

	std::cout << "max:" << max_int(a, b) << std::endl;
	std::cout << "max:" << max_long(a, b) << std::endl;
	std::cout << "max:" << max_float(a, b) << std::endl;


}