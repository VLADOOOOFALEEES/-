#include <iostream>
#include <Windows.h>

/*
	Математические: + - * / = %
	Сравнительные: > < >= <= == !=
	Логические: && ||	!

	short, int, long, long long
	float, double, long double 
	char 

	unsigned 
*/
int main()

{
	//setlocale(LC_ALL, "ru"
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/*
		float cneck = 50;
		float tea = 75;
		float soda = 25;
		int count = 0;
		float cnecksum = 0;
		float teasum = 0;
		float sodasum = 0;
		std::cout << "Cneck 50, tea 75, soda 25\n\n";
		std::cout << "Сколько купить cneck?";
		std::cin >> count;
		cnecksum */
	/*
	int a = 3;
	std::cin >> a;
	if (a > 0);
	{
		std::cout << "Hello world\n";

	}
	else if (a < 10)
	{
		std::cout << "Hello\n";
	}
	else
	{
		std::cout << "Error";
	}*/
	/*
	float number;
	std::cout << "Введите число:";
	std::cin >> number;
	if (number > 0)
	{
		std::cout << "Повар\n";
	}
	if (number < 0)
	{
		std::cout << "Котик\n";
	}
	if (number == 0)
	{
		std::cout << "ЫыыыыыЫЫ\n";
	}
	system("pause");
	*/

	char oper;
	double nb1;
	double nb2;
	double otvet = 0;
	std::cout << "Введите первое число:";
	std::cin >> nb1;
	std::cout << "Введите действие(+,-,*,/,%):";
	std::cin >> oper;
	std::cout << "Введите второе число:";
	std::cin >> nb2;
	if (oper == '+')
	{
		otvet = nb1 + nb2;
	}
	if (oper == '-')
	{
		otvet = nb1 - nb2;
	}
	if (oper == '*')
	{
		otvet = nb1 * nb2;
	}
	if (oper == '/')
	{
		otvet = nb1 / nb2;
	}
	else if (oper == '%')
	{
		otvet = nb1 * nb2 * 0.01;
	}
	std::cout << "Ответ:";
	std::cout << otvet;




	

	


	




}
