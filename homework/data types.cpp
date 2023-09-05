#include <iostream>
#include <limits>
#include <limits.h>
#include <numeric>
#include <Windows.h>
#include <map>

//global
int A = 5;

typedef int Myint;

int main()
//local
{
	//перелічуваний тип даних
	//по замовчуванню компілятор використовує int
	enum Directions
	{
		North,
		South,
		East,
		West
	};

	Directions direction = West
    /*
	або
	enum class Directions
	{
		North,
		South,
		East,
		West
	};

	Directions direction = Directions::West
	*/

	//змінну не можна модифікувати
	const bool result = true;

	constexpr float PI = 3.141516;
	constexpr int sumOfAllSides = PI * 3;

	bool result1 = true;
	bool result2 = false;
	auto myAutoVariable = 15.f;

	Myint myInt = 5;

	//перевіряємо скільки байт в змінній
	std::cout << "double:" << sizeof(double) << std::endl;

	//локальна змінна
	{
		int newLocalVariable = 10;
	}

	std::cout << "A:" << A << std::endl;

	//initialization using copy
	int variable1 = 0;
	variable1 = 5;

	//straight initialization
	int variable2(5);

	//iniform initialization (C++ 11)
	int variable3{ 10 };

	//wrong
	//int a, int b, int c;
	//correct
	//int a, b, c = 5;
	// a - not initialized
	// b - not initialized
	// c - 5

	//wrong
	//int d, double e;
	//correct
	//int d; 
	//double e;

	std::cout << "variable data 1:" << variable1 << std::endl;

	//float (числа з плаваючою крапкою)
	//365
//3.650000E02

//3.650000 - mantissa
//10^2 - exponent

//3.650000 * 10^2 = 365

	float float1 = 1;
	float float2 = 1.f;

	char symbol = 's';
	std::cout << "Symbol" << symbol << std::endl;

	//int symbol = 84;
	//std::cout << "Symbol" << (char)symbol << std::endl;

	return 0;
}

void func()
{
	return A;
}