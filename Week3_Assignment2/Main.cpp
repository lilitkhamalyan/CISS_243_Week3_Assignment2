// Name: Lilit Khamalyan
// Class: Ciss 243
// Date: 10/09/2018
#include "MinMax.h"
#include <iostream>
using namespace std;
int main()
{
	// Create 3 instances of the data types int, double, and char.
	MinMax<int> findIntMinMax;
	MinMax<double> findDoubleMinMax;
	MinMax<char> findCharMinMax;
	// To hold int inputs.
	int intNumber1, intNumber2;
	// To hold double inputs.
	double doubleNumber1, doubleNumber2;
	// To hold char inputs
	char character1, character2;
	cout << "THIS PROGRAM WILL DETERMINE THE LARGEST AND SMALLEST VALUES. \n\n";
	// Get the int numbers. 
	cout << "Enter the first integer numbers: ";
	cin >> intNumber1;
	cout << "Enter the second integer numbers: ";
	cin	>> intNumber2;
	// Display Max and Min integer numbers by calling maximun and minimum functions.
	cout << "The smallest number is: " << findIntMinMax.minimum(intNumber1, intNumber2) << endl;
	cout << "The largest number is: " << findIntMinMax.maximum(intNumber1, intNumber2) << endl;
	cout << endl;
	// Get the double numbers
	cout << "Enter the first double number: ";
	cin >> doubleNumber1;
	cout << "Enter the second double number: ";
	cin >> doubleNumber2;
	// Display Max and Min double numbers by calling maximun and minimum functions.
	cout << "The smallest number is: " << findDoubleMinMax.minimum(doubleNumber1, doubleNumber2) << endl;
	cout << "The largest number is: " << findDoubleMinMax.maximum(doubleNumber1, doubleNumber2) << endl;
	cout << endl;
	// Get the characters. 

	cout << "Enter the first character: ";
	cin >> character1;
	cout << "Enter the second character: ";
	cin >> character2;
	// Display Max and Min characters by calling maximun and minimum functions.
	cout << "The smallest character is: " << findCharMinMax.minimum(character1, character2) << endl;
	cout << "The largest character is: " << findCharMinMax.maximum(character1, character2) << endl;
	system("pause");
	return 0;
}