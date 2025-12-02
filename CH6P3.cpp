/*
File Name: CH6P3.cpp
Github URL: https://github.com/clk2039/CH6P3.git
Programmer: Kit Miller
Date: December 2025
Requirements: Write a modular, procedural program that creates a table showing the temperature in Celcius for Fahrenheit temperatures
ranging from 0 to 20. The program should use a function to convert Fahrenheit to Celcius. The formula for the conversion is
C = (5/9) * (F - 32). Use named global constants to assign minimum and maximum Fahrenheit values.
*/

#include <iostream>
#include <iomanip>
using namespace std;

/* Named global constants for minimum and maximum Fahrenheit values*/
const int MIN_FAHRENHEIT = 0;
const int MAX_FAHRENHEIT = 20;

/* The function getCelsius converts Fahrenheit to Celsius
Function - getCelsius
Purpose - Converts a temperature from Fahrenheit to Celsius
Parameters - double fahrenheit, the temperature in Fahrenheit
Returns - double celsius, the converted temperature in Celsius
Preconditions - fahrenheit is a valid temperature in Fahrenheit
Postconditions - celsius is the temperature in Celsius
*/
double getCelsius(double fahrenheit)
{
    double celsius = (5.0 / 9.0) * (fahrenheit - 32);
    return celsius;
}
/* This program produces a table showing degrees Fahrenheit bewteen the values of 0 and 20 with the corresponding Celsius value. */
int main()
{

    cout << setw(10) << "Fahrenheit" << setw(10) << "Celsius" << endl;
    cout << "------------------------" << endl;
    for (int fahrenheit = 0; fahrenheit <= 20; ++fahrenheit)
    {
        double celsius = getCelsius(fahrenheit);
        cout << setw(10) << fahrenheit << setw(10) << fixed << setprecision(2) << celsius << endl;
    }
	return 0;
    
}


