#include <iostream>
#include <iomanip>

int main()
{

}

int task_1()
{
	int digit, digit_two;
	std::cin >> digit >> digit_two;
	std::cout << "Sum = " << digit + digit_two << ", product = " << digit * digit_two << std::endl;
	return 0;
}


int task_2()
{
	int kilometers, meters;
	std::cin >> kilometers;
	meters = kilometers * 1000;
	std::cout << "Result = " << meters << " meters" << std::endl;
	return 0;
}

int task_3()
{
	int minutes;
	float price, cost;
	std::cin >> minutes >> price;
	cost = minutes * price;
	std::cout << "The cost is " << cost << " UAH" << std::endl;
	return 0;
}

int task_4()
{
	int apples, melons, tomatoes, cucumbers;
	std::cin >> apples >> melons >> tomatoes >> cucumbers;
	const float price_apple = 8.50, price_melon = 64.99, price_tomato = 9.45, price_cucumber = 8.00;
	float price_apples, price_melons, price_tomatos, price_cucumbers, check_amount;
	price_apples = apples * price_apple;
	price_melons = melons * price_melon;
	price_tomatos = tomatoes * price_tomato;
	price_cucumbers = cucumbers * price_cucumber;
	check_amount = price_apples + price_melons + price_tomatos + price_cucumbers;
	std::cout << "          Check" << std::endl;
	std::cout << std::fixed << std::setprecision(2) << std::endl;
	std::cout << apples << "x apple          " << price_apples << " UAH" << std::endl;
	std::cout << melons << "x melon          " << price_melons << " UAH" << std::endl;
	std::cout << tomatoes << "x tomato         " << price_tomatos << " UAH" << std::endl;
	std::cout << cucumbers << "x cucumber       " << price_cucumbers << " UAH" << std::endl;
	std::cout << "____________________________" << std::endl;
	std::cout << "Check amount      " << check_amount << " UAH" << std::endl;
	return 0;
}

int task_5()
{
	const float EUR_rate = 40.45, USD_rate = 37.55, PLN_rate = 8.6;
	int amount, currency;
	std::cout << "Please select the currency: 1 for EUR, 2 for USD, 3 for PLN" << std::endl;
	std::cin >> currency;
	if (currency == 1)
	{
		std::cout << "Please enter the amount you want to exchange:" << std::endl;
		std::cin >> amount;
		std::cout << EUR_rate * amount << std::endl;
	}
	else if (currency == 2)
	{
		std::cout << "Please enter the amount you want to exchange:" << std::endl;
		std::cin >> amount;
		std::cout << USD_rate * amount << std::endl;
	}
	else if (currency == 3)
	{
		std::cout << "Please enter the amount you want to exchange:" << std::endl;
		std::cin >> amount;
		std::cout << PLN_rate * amount << std::endl;
	}
	else
	{
		std::cout << "We don't have such currency" << std::endl;
	}
	return 0;
}

int task_6()
{
	int revolutions;
	double mars_years = 1.88;

	std::cin >> revolutions;

	double earth_years = revolutions * mars_years;

	std::cout << "Result: " << earth_years << std::endl;
	return 0;
}

int task_7()
{
	std::cout << "Enter a number" << std::endl;
	int number;

	std::cin >> number;

	std::cout << "The number squared is " << number * number << std::endl;
	std::cout << "The cubed number is " << number * number * number << std::endl;
	return 0;
}

int task_8()
{
	double fuel_consumption, fuel_price, distance_km;
	std::cin >> fuel_consumption >> fuel_price >> distance_km;

	double liters = (fuel_consumption / 100) * distance_km;
	double cost = liters * fuel_price;

	std::cout << "Result: " << cost << std::endl;
	return 0;
}