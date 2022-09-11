
#include <iostream>

void Value(int x, int y)
{
    std::cout << "Значение=";
    std::cout << (3 + exp(y - 1)) / (1 + pow(x, 2) * abs(y - tan(x))) << std::endl; //выражение 
}

int main()
{
    int x;
    int y;
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите число x=" << std::endl; //Ввод числа x
    std::cin >> x;
    std::cout << "Введите число y=" << std::endl; //Ввод числа y
    std::cin >> y;
    Value(x,y); //вызов функции value
    return 0;
}