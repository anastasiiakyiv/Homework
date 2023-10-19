#pragma once

int days_in_month(int month)
{
    int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (month >= 1 && month <= 12) 
    {
        return days[month];
    }
    else 
    {
        return -1;
    }
}

std::string month_name(int month)
{
    std::string months[] = { "", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    if (month >= 1 && month <= 12) 
    {
        return months[month];
    }
    else 
    {
        return "Incorrect month number";
    }
}

int Sum(int args[], int count) 
{
    int result = 0;
    for (int i = 0; i < count; i++) 
    {
        result += (i + 1) * args[i];
    }
    return result;
}

int SumParni(int args[], int count) 
{
    int sum = 0;
    for (int i = 0; i < count; i++) 
    {
        if (args[i] % 2 == 0) 
        {
            sum += args[i];
        }
    }
    return sum;
}

int Count(int args[], int count) 
{
    int digits = 0;
    for (int i = 0; i < count; i++) 
    {
        if (args[i] >= 0 && args[i] < 10) 
        {
            digits++;
        }
    }
    return digits;
}

float Avg(float args[], int count)
{
    float sum = 0.0;
    for (int i = 0; i < count; i++)
    {
        sum += args[i];
    }
    return sum / count;
}

int Count(float args[], int count) 
{
    int count_digits = 0;
    for (int i = 0; i < count; i++) 
    {
        if (args[i] != 0.0)
        {
            count_digits++;
        }
    }
    return count_digits;
}

int Max(int a, int b) 
{
    int max = a;
    if (b > max) 
    {
        max = b;
    }
    return max;
}

int Max(int a, int b, int c) 
{
    int max = a;
    if (b > max) 
    {
        max = b;
    }
    if (c > max) 
    {
        max = c;
    }
    return max;
}

int Max(int array[], int length) 
{
    if (length <= 0) 
    {
        return 0;
    }

    int max = array[0];
    for (int i = 1; i < length; i++) 
    {
        if (array[i] > max) 
        {
            max = array[i];
        }
    }
    return max;
}

int count_numbers(int array[], int length) 
{
    int count = 0;
    for (int i = 0; i < length; i++) 
    {
        if (array[i] >= 10 && array[i] <= 99) 
        {
            count++;
        }
    }
    return count;
}

int count_numbers(int array[][3], int rows) 
{
    int count = 0;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            if (array[i][j] >= 10 && array[i][j] <= 99) 
            {
                count++;
            }
        }
    }
    return count;
}

int sum_of_products(int a, int b, int c) 
{
    return (a * b) + (b * c);
}

int sum_of_products(int array[], int length) 
{
    int sum = 0;
    for (int i = 0; i < length - 1; i++) 
    {
        sum += (array[i] * array[i + 1]);
    }
    return sum;
}

double Average(int a, int b) 
{
    return (a + b) / 2.0;
}

double Average(int a, int b, int c) 
{
    return (a + b + c) / 3.0;
}

double Average(int array[], int length) 
{
    double sum = 0.0;
    for (int i = 0; i < length; i++) 
    {
        sum += array[i];
    }
    return sum / (double)length;
}

struct Drib
{
    int numerator;
    int denominator;

    Drib(int num, int denom) 
    {
        numerator = num;
        denominator = denom;
    }

    Drib operator+(const Drib& other) const 
    {
        int new_numerator = (numerator * other.denominator) + (other.numerator * denominator);
        int new_denominator = denominator * other.denominator;
        return Drib(new_numerator, new_denominator);
    }

    Drib operator-(const Drib& other) const 
    {
        int new_numerator = (numerator * other.denominator) - (other.numerator * denominator);
        int new_denominator = denominator * other.denominator;
        return Drib(new_numerator, new_denominator);
    }
};

struct Complex 
{
    double real;
    double imaginary;

    Complex(double r, double i) 
    {
        real = r;
        imaginary = i;
    }

    Complex operator+(const Complex& other) const 
    {
        double new_real = real + other.real;
        double new_imaginary = imaginary + other.imaginary;
        return Complex(new_real, new_imaginary);
    }

    Complex operator-(const Complex& other) const 
    {
        double new_real = real - other.real;
        double new_imaginary = imaginary - other.imaginary;
        return Complex(new_real, new_imaginary);
    }

    void print() 
    {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

struct Vector 
{
    double x;
    double y;

    Vector(double x_, double y_)
    {
        x = x_;
        y = y_;
    }
};

bool are_perpendicular(const Vector& v1, const Vector& v2) 
{
    return v1.x * v2.x + v1.y * v2.y == 0;
}

bool are_collinear(const Vector& v1, const Vector& v2) 
{
    if (v1.x == 0 && v1.y == 0) 
    {
        return true;
    }
    if (v2.x == 0 && v2.y == 0) 
    {
        return true;
    }
    return (v1.x / v2.x == v1.y / v2.y);
}

struct Point 
{
    double x;
    double y;
    double z;

    Point(double x_, double y_, double z_)
    {
        x = x_;
        y = y_;
        z = z_;
    }
};

double distance_between_points(const Point& p1, const Point& p2) 
{
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    double dz = p1.z - p2.z;
    return dx * dx + dy * dy + dz * dz;
}

double distance_to_origin(const Point& p) 
{
    return p.x * p.x + p.y * p.y + p.z * p.z;
}