#include <iostream>

void func1(int x)
{
	std::cout << (-3 * x) + 9 << std::endl;
}

void func2(int x)
{
	std::cout << (1) / (x - 7) << std::endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	std::cout << "Введите число x=";
	std::cin >> x;
	if (x <= 7)
	{
		func1(x);
	}
	if (x > 7)
	{
		func2(x);
	}
	return 0;
}