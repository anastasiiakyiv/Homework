#include <iostream>
#include <iomanip>
#include <string>
#include "mylib.h"

int main()
{

}

int task_1()
{
	int digit = 0, digit_two = 0;
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

int task_9()
{
	std::cout << "Please enter three numbers" << std::endl;

	int number_1 = 0, number_2 = 0, number_3 = 0;
	std::cin >> number_1 >> number_2 >> number_3;

	int average = 0;
	average = (number_1 + number_2 + number_3) / 3;

	std::cout << "Average: " << average << std::endl;
	std::cout << "Average: " << (number_1 + number_2 + number_3) / 3 << std::endl;
	return 0;
}

int task_9_2()
{
	std::cout << "Please enter three numbers" << std::endl;

	int number_1 = 0, number_2 = 0, number_3 = 0;
	std::cin >> number_1 >> number_2 >> number_3;

	int summary = 0;
	summary = number_1 + number_2 + number_3;

	std::cout << "Average: " << summary / 3 << std::endl;
	return 0;
}

int task_10()
{
	std::cout << "Please enter the number" << std::endl;
	
	int number = 0;
	std::cin >> number;

	int first_digit = 0;
	first_digit = number / 10;

	int second_digit = 0;
	second_digit = number % 10;

	int summary = 0;
	summary = first_digit + second_digit;

	std::cout << "First digit: " << first_digit << ", second digit: " << second_digit << ", summary = " << summary << std::endl;
	return 0;
}

int task_11()
{
	std::cout << "Please enter three numbers" << std::endl;

	int number_1 = 0, number_2 = 0, number_3 = 0;
	std::cin >> number_1 >> number_2 >> number_3;

	if (number_1 < number_2 && number_2 < number_3)
		std::cout << "true";
	else
		std::cout << "false";
	return 0;
}

int task_12()
{
	std::cout << "Please enter three numbers" << std::endl;

	int number_1 = 0, number_2 = 0, number_3 = 0;
	std::cin >> number_1 >> number_2 >> number_3;

	if (number_1 > 0 && number_1 % 2 == 0 || number_2 > 0 && number_2 % 2 == 0 || number_3 > 0 && number_3 % 2 == 0)
		std::cout << "true";
	else
		std::cout << "false";
	return 0;
}

int task_13()
{
	std::cout << "Please enter two numbers" << std::endl;

	int number_1 = 0, number_2 = 0;
	std::cin >> number_1 >> number_2;

	if (number_1 > number_2)
		std::cout << "Number 1 is greater than Number 2";
	else if (number_1 < number_2)
		std::cout << "Number 2 is greater than Number 1";
	else 
		std::cout << "Number 1 is equal to Number 2";
	return 0;
}

int task_14()
{
	std::cout << "Please enter the number" << std::endl;

	int number = 0;
	std::cin >> number;

	int first_digit = 0, second_digit = 0;
	first_digit = number / 10;
	second_digit = number % 10;

	if (first_digit == second_digit)
		std::cout << "The first digit is equal to the second digit";
	else
		std::cout << "The first digit is not equal to the second digit";
	return 0;
}

int task_15()
{
	std::cout << "Please enter the number" << std::endl;

	int number = 0;
	std::cin >> number;

	int first_digit = 0, third_digit = 0;
	first_digit = number / 100;
	third_digit = number % 10;

	if (first_digit == third_digit)
		std::cout << "The first digit is equal to the third digit";
	else
		std::cout << "The first digit is not equal to the third digit";
	return 0;
}

int task_16()
{
	int side_1 = 0, side_2 = 0;

	std::cout << "Enter the length of the first side" << std::endl;
	std::cin >> side_1;

	std::cout << "Enter the length of the second side" << std::endl;
	std::cin >> side_2;

	if (side_1 == side_2)
		std::cout << "It is a square";
	else
		std::cout << "It is a rectangle";
	return 0;
}

int task_17()
{
	char character;

	std::cout << "Enter the number" << std::endl;
	std::cin >> character;

	if (character >= '0' && character <= '9')
		std::cout << "It is a number" << std::endl;
	else
		std::cout << "It is not a number" << std::endl;
	return 0;
}

int task_18()
{
	int number_1 = 0, number_2 = 0;

	std::cout << "Please enter two numbers" << std::endl;
	std::cin >> number_1 >> number_2;

	if (number_1 > number_2)
	{
		int temporary = number_1;
		number_1 = number_2;
		number_2 = temporary;
	}

	std::cout << "Number 1 = " << number_1 << std::endl;
	std::cout << "Number 2 = " << number_2 << std::endl;
	return 0;
}

int task_19()
{
	double temperature = 0;

	std::cout << "Please enter the temperature" << std::endl;
	std::cin >> temperature;

	if (temperature >= 35.0 && temperature < 36.1)
	{
		std::cout << "You have a low temperature" << std::endl;
	}

	else if (temperature >= 36.1 && temperature < 37.0)
	{
		std::cout << "Your temperature is normal" << std::endl;
	}

	else if (temperature >= 37.0 && temperature < 40.1)
	{
		std::cout << "You have a fever" << std::endl;
	}

	else 
	{
		std::cout << "Please enter a valid value" << std::endl;
	}
	return 0;
}

int task_20()
{
	int hours = 0, minutes = 0, seconds = 0;

	std::cout << "Please enter hours, minutes and seconds" << std::endl;
	std::cin >> hours >> minutes >> seconds;

	if (hours >= 25 || minutes >= 61 || seconds >= 60)
		std::cout << "Please enter valid values" << std::endl;
	else 
		std::cout << "The values are valid" << std::endl;
	return 0;
}

int task_21()
{
	int year = 0;

	std::cout << "Please enter the year" << std::endl;
	std::cin >> year;

	if (year%4 == 0 && year%100 !=0 || year%400 == 0)
		std::cout << "It is a leap year" << std::endl;
	else
		std::cout << "It is not a leap year" << std::endl;
	return 0;
}

int task_22()
{
	int age = 0;
	char gender;

	std::cout << "Enter the age" << std::endl;
	std::cin >> age;

	std::cout << "Enter the gender (M/F)" << std::endl;
	std::cin >> gender;

	if (gender == 'M')
	{
		if (age >= 60)
			std::cout << "Retirement age" << std::endl;
		else
			std::cout << "Not retirement age" << std::endl;
	}

	else if (gender == 'F')
	{
		if (age >= 55)
			std::cout << "Retirement age" << std::endl;
		else
			std::cout << "Not retirement age" << std::endl;
	}

	else 
		std::cout << "You entered the gender incorrectly" << std::endl;
	return 0;
}

int task_23()
{
	int digit = 1;

	while (digit <= 100)
	{
		std::cout << digit << " ";
		digit++;
	}
	return 0;
}

int task_24()
{
	int digit;
	int sum = 0, average = 0, i = 0;

	std::cout << "Enter digits: " << std::endl;

	while (i < 10)
	{
		std::cin >> digit;
		sum += digit;
		i++;
	}

	average = sum / 10;

	std::cout << "Sum = " << sum << std::endl;
	std::cout << "Average = " << average << std::endl;
	return 0;
}

int task_25()
{
	int n;
	int sum = 0, count = 0;

	std::cout << "Enter the number of unpaired numbers" << std::endl;
	std::cin >> n;

	std::cout << "The first " << n << " odd numbers and their squares:" << std::endl;

	do 
	{
		if (count % 2 != 0) 
		{
			std::cout << count << " ^ 2 = " << count * count << std::endl;
			sum += count * count;
		}
		count++;
	} while (count <= 2 * n);

	std::cout << "Sum of squares of " << n << " odd numbers = " << sum << std::endl;
	return 0;
}

int task_26()
{
	int number;
	int sum = 0, count = 0;

	do 
	{
		std::cout << "Enter the number " << count + 1 << ": " << std::endl;
		std::cin >> number;
		sum += number;
		count++;
	} while (count < 7);

	std::cout << "Sum = " << sum << std::endl;
	return 0;
}

int task_27()
{
	int user_choice;
	double length_cm, result;

	std::cout << "Enter the length in centimeters " << std::endl;
	std::cin >> length_cm;

	std::cout << "Select the unit of measurement: 1 - millimeters, 2 - decimeters, 3 - meters " << std::endl;
	std::cin >> user_choice;

	switch (user_choice)
	{
	case 1: 
		result = length_cm * 10;
		std::cout << "Length in millimeters = " << result << std::endl;
		break;
	case 2:
		result = length_cm / 10;
		std::cout << "Length in decimeters = " << result << std::endl;
		break;
	case 3:
		result = length_cm / 100;
		std::cout << "Length in meters = " << result << std::endl;
		break;
	default: 
		std::cout << "An error occurred" << std::endl;
	}
	return 0;
}

int task_28()
{
	char operation;
	double number_1, number_2, result;

	std::cout << "Calculator Console Application" << std::endl;

	std::cout << "Enter the first number: " << std::endl;
	std::cin >> number_1;

	std::cout << "Enter the second number: " << std::endl;
	std::cin >> number_2;

	std::cout << "Please enter the operation to perform: (+, -, *, /) :" << std::endl;
	std::cin >> operation;

	switch (operation)
	{
	case '+':
		result = number_1 + number_2;
		std::cout << number_1 << " + " << number_2 << " = " << result;
		break;
	case '-':
		result = number_1 - number_2;
		std::cout << number_1 << " - " << number_2 << " = " << result;
		break;
	case '*':
		result = number_1 * number_2;
		std::cout << number_1 << " * " << number_2 << " = " << result;
		break;
	case '/':
		if (number_2 == 0)
		{
			std::cout << "Error: division by zero" << std::endl;
		}
		else
		{
			result = number_1 / number_2;
			std::cout << number_1 << " / " << number_2 << " = " << result;
		}
		break;
	default:
		std::cout << "Error: unknown operation" << std::endl;
	}
	return 0;
}

int task_29()
{
	int array[10];
	int product = 1;

	std::cout << "Please input 10 numbers:" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cin >> array[i];
	}

	std::cout << "Array elements: ";
	for (int i = 0; i < 10; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
	{
		product *= array[i];
	}
	std::cout << "Product = " << product << std::endl;

	return 0;
}

int task_30()
{
	int array[7];
	int negative_count = 0, positive_count = 0;

	for (int i = 0; i < 7; i++)
	{
		array[i] = rand() % (50 - (-12) +1) + (-12);
	}

	std::cout << "Array elements: ";
	for (int i = 0; i < 7; i++)
	{
		std::cout << array[i] << " ";
		if (array[i] < 0)
			negative_count++;
		else
			positive_count++;
	}
	std::cout << std::endl;

	std::cout << "Number of negative elements = " << negative_count << std::endl;
	std::cout << "Number of positive elements = " << positive_count << std::endl;

	return 0;
}

int task_31()
{
	long array[7] = { 34, -56, 4, 7, 78, -12, -8 };
	long sum = 0;

	std::cout << "Array elements: ";
	for (int i = 0; i < 7; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;

	for (int i = 0; i < 7; i++)
	{
		if (array[i] % 2 == 0)
		{
			sum += array[i];
		}
	}
	std::cout << "Sum = " << sum << std::endl;

	return 0;
}

int task_32()
{
	int array[30];
	int add_var = 1;

	for (int i = 0; i < 30; i++)
	{
		array[i] = add_var;
		add_var *= 2;
	}

	std::cout << "Array elements: ";
	for (int i = 0; i < 30; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "Array in reverse order: ";
	for (int i = 30 - 1; i >= 0; i--)
	{
		std::cout << array[i] << " ";
	}

	return 0;
}


int task_33()
{
	int array[10] = {-6, 7, 15, -19, -2, 45, 34, 9, -23, -51};

	for (int i = 0; i < 10; i++)
	{
		if (array[i] < 0)
		{
			array[i] = -array[i];
		}
	}

	std::cout << "Array elements: ";
	for (int i = 0; i < 10; i++)
	{
		std::cout << array[i] << " ";
	}

	return 0;
}

int task_34()
{
	int array[10] = { 4, 8, -5, 9, -3, -8, 2, -1, 5, 7};
	int max = 0, min = 0, add_var;

	for (int i = 0; i < 10; i++)
	{
		if (array[i] > array[max])
		{
			max = i;
		}
		if (array[i] < array[min])
		{
			min = i;
		}
	}

	add_var = array[max];
	array[max] = array[min];
	array[min] = add_var;

	std::cout << "Array elements: ";
	for (int i = 0; i < 10; i++)
	{
		std::cout << array[i] << " ";
	}

	return 0;
}

int task_35()
{
	const int array_size = 10;
	int array[array_size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int sum = 0;
	for (int i = 1; i < 10; i += 2)
	{
		sum += array[i];
	}

	std::cout << "Sum of elements with odd indices = " << sum << std::endl;

	return 0;
}

int task_36()
{
	int array[10] = { 13, -9, -5, 17, -45, 16, 8, -8, 5, 52 };
	int first_element = 0;
	int last_element = 0;

	for (int i = 0; i < 10; i++) 
	{
		if (array[i] < 0) 
		{
			if (first_element < 0)
			{
				first_element = i;
			}
			last_element = i - 1;
		}
	}

	int count = 0;
	if (first_element != -1 && last_element != -1 && last_element > first_element) 
	{
		count = last_element - first_element - 1;
	}

	std::cout << "Result = " << count << std::endl;

	return 0;
}

int task_37()
{
	const int array_size = 10;
	int array[array_size];

	std::cout << "Enter the elements of the array";
	for (int i = 0; i < array_size; i++)
	{
		std::cin >> array[i];
	}

	for (int i = 0; i < array_size -1; i+=2)
	{
		int add_var = array[i];
		array[i] = array[i + 1];
		array[i + 1] = add_var;
	}

	std::cout << "Array after changes: ";
	for (int i = 0; i < array_size; i++)
	{
		std::cout << array[i] << " ";
	}

	return 0;
}

int task_38()
{
	int A[5];

	std::cout << "Enter the elements of the array";
	for (int i = 0; i < 5; i++)
	{
		std::cin >> A[i];
	}

	int B[5];
	for (int i = 0; i < 5; i++)
	{
		B[i] = A[i];
	}

	std::cout << "Array B: ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << B[i] << " ";
	}

	return 0;
}

int task_39()
{
	int A[5];

	std::cout << "Enter the elements of the array A";
	for (int i = 0; i < 5; i++)
	{
		std::cin >> A[i];
	}

	int B[5];

	for (int i = 0; i < 5; i++)
	{
		B[i] = A[4 - i];
	}

	std::cout << "Array A: ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << A[i];

	}
	std::cout << std::endl;

	std::cout << "Array B: ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << B[i];
	}
	std::cout << std::endl;

	for (int i = 0; i < 5; i++)
	{
		std::cout << A[i] << " " << B[i] << " " << i << std::endl;
	}

	return 0;
}

int task_40()
{
	int hours = 2, minutes = 20, seconds = 40;

	int* hours_ptr = &hours;
	int* minutes_ptr = &minutes;
	int* seconds_ptr = &seconds;

	int h = *hours_ptr;
	int m = *minutes_ptr;
	int s = *seconds_ptr;

	int result;
	result = h * 3600 + m * 60 + s;

	std::cout << "Result = " << result << std::endl;

	return 0;
}

int task_41()
{
	int* int_value = nullptr;
	int_value = new int(5);

	double* double_value = nullptr;
	double_value = new double(5.5);

	std::cout << "Enter the elements of the array:";
	int* int_array = new int[5];
	for (int i = 0; i < 5; i++)
	{
		std::cin >> int_array[i];
	}

	std::cout << "Array elements: ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << int_array[i] << " ";
	}
	std::cout << std::endl;

	delete[] int_array;

	std::cout << "Int Value: " << *int_value << std::endl;
	std::cout << "Double Value: " << *double_value << std::endl;

	double product = *int_value * *double_value;
	double average = (*int_value + *double_value) / 2;

	std::cout << "Product = " << product << std::endl;
	std::cout << "Average = " << average << std::endl;

	delete int_value;
	delete double_value;

	return 0;
}

int task_42()
{
	int A[5] = { 1, 2, 3, 4, 5 };
	int B[5] = { 6, 7, 8, 9, 10 };

	int new_size = 10;
	int* new_array = new int[new_size];

	for (int i = 0; i < 5; i++)
	{
		new_array[i] = A[i];
	}

	int* ptr_new_array = new_array + 5;

	for (int i = 0; i < 5; i++) {
		if (B[i] % 3 == 0 || B[i] % 7 == 0) 
		{
			*ptr_new_array = B[i];
			ptr_new_array++;
		}
	}

	std::cout << "New array: ";
	for (int i = 0; i < new_size; i++)
	{
		std::cout << new_array[i] << " ";
	}

	delete[] new_array;

	return 0;
}

int task_43()
{
	int A[5];

	std::cout << "Enter the elements of the array: ";
	for (int i = 0; i < 5; i++)
	{
		std::cin >> A[i];
	}

	int first_element = A[0];
	int new_size = 0;

	for (int i = 0; i < 5; i++)
	{
		if ((first_element % 2 == 0 && A[i] % 2 != 0) || (first_element % 2 != 0 && A[i] % 2 == 0))
		{
			new_size++;
		}
	}

	int* new_array = new int[new_size];
	int new_index = 0;

	for (int i = 0; i < 5; i++)
	{
		if ((first_element % 2 == 0 && A[i] % 2 != 0) || (first_element % 2 != 0 && A[i] % 2 == 0))
		{
			new_array[new_index] = A[i];
			new_index++;
		}
	}

	std::cout << "New array: ";
	for (int i = 0; i < new_size; i++)
	{
		std::cout << new_array[i] << " ";
	}

	delete[] new_array;

	return 0;
}

int task_44()
{
	int array[10];

	std::cout << "Enter the elements of the array: ";
	for (int i = 0; i < 10; i++)
	{
		std::cin >> array[i];
	}

	int new_size = 0;

	for (int i = 0; i < 10; i++)
	{
		if (array[i] % 2 == 0)
		{
			new_size++;
		}
	}

	int* new_array = new int[new_size];
	int new_index = 0;

	for (int i = 0; i < 10; i++) 
	{
		if (array[i] % 2 == 0) 
		{
			new_array[new_index] = array[i];
			new_index++;
		}
	}

	std::cout << "New array: ";
	for (int i = 0; i < new_size; i++)
	{
		std::cout << new_array[i] << " ";
	}

	delete[] new_array;

	return 0;
}

int task_45()
{
	int size = 10;
	int* array = new int[size];

	std::cout << "Enter the elements of the array: ";
	for (int i = 0; i < size; i++)
	{
		std::cin >> array[i];
	}

	int new_size = size * 2;
	int* new_array = new int[new_size];
	int new_index = 0;

	for (int i = 0; i < size; i++) 
	{
		int element = array[i];
		int last_digit = element % 10;

		new_array[new_index++] = last_digit;
		new_array[new_index++] = element;
	}

	std::cout << "New array: ";
	for (int i = 0; i < new_size; i++) 
	{
		std::cout << new_array[i] << " ";
	}

	delete[] array;
	delete[] new_array;

	return 0;
}

int task_46()
{
	char str[10];
	std::cout << "Enter a string: ";
	std::cin >> str;

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == '+')
			str[i] = '-';
	}

	std::cout << "String after changes: " << str;

	return 0;
}

int task_47()
{
	const char* str = "Hello12345";

	int digit_count = 0;

	for (int i = 0; str[i] != '\0'; i++) 
	{
		if (isdigit(str[i])) 
		{
			digit_count++;
		}
	}

	std::cout << "The number of digits in a string: " << digit_count << std::endl;

	return 0;
}

int task_48()
{
	char str[100];
	std::cout << "Enter a string: ";
	std::cin.getline(str, 100);

	for (int i = 0; str[i] != '\0'; i++)
	{
		char letter = str[i];
		if (letter >= 'a' && letter < 'z')
		{
			str[i] = letter + 1;
		}
		else if (letter == 'z')
		{
			str[i] = 'a';
		}
		else if (letter >= 'A' && letter < 'Z')
		{
			str[i] = letter + 1;
		}
		else if (letter == 'Z')
		{
			str[i] = 'A';
		}
	}

	std::cout << "String after changes: " << str << std::endl;

	return 0;
}

int task_49()
{
	std::string input;
	std::cout << "Enter a string: ";
	std::getline(std::cin, input);

	std::string result;
	char current_char = input[0];

	for (int i = 1; i < input.length(); i++)
	{
		if (input[i] != current_char)
		{
			result += current_char;
			current_char = input[i];
		}
	}

	result += current_char;

	std::cout << "String after changes: " << result << std::endl;

	return 0;
}

int task_50()
{
	for (int month = 1; month <= 12; ++month) 
	{
		std::string name = month_name(month);
		int days = days_in_month(month);

		if (days != -1) 
		{
			std::cout << "There are " << days << " days in " << name << std::endl;
		}
		else 
		{
			std::cout << "Incorrect month number" << std::endl;
		}
	}

	return 0;
}

int task_51()
{
	int numbers[] = { 3, 5, 7, 9 };
	int count = sizeof(numbers) / sizeof(numbers[0]);

	int total_sum = Sum(numbers, count);
	std::cout << "Sum = " << total_sum << std::endl;

	return 0;
}

int task_52()
{
	int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int count = sizeof(numbers) / sizeof(numbers[0]);

	int result = SumParni(numbers, count);
	std::cout << "Sum of even numbers = " << result << std::endl;

	return 0;
}

int task_53()
{
	int numbers[] = { 13, 5, 15, 7, 4, 0, 55 };
	int count = sizeof(numbers) / sizeof(numbers[0]);

	int digits = Count(numbers, count);
	std::cout << "Result = " << digits << std::endl;

	return 0;
}

int task_54()
{
	float numbers[] = { 1.2, 3.4, 5.6, 7.8 };
	int count = sizeof(numbers) / sizeof(numbers[0]);

	float average = Avg(numbers, count);
	std::cout << "Result = " << average << std::endl;

	return 0;
}

int task_55()
{
	float numbers[] = { 5.1, 0.0, 12.8, 0.6, 0.8, 7.3 };
	int count = sizeof(numbers) / sizeof(numbers[0]);

	int count_digits = Count(numbers, count);
	std::cout << "Result = " << count_digits << std::endl;

	return 0;
}