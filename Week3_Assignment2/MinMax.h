#ifndef MINMAX_H
#define MINMAX_H
template <class T>
class MinMax
{
private:
	T number1;
	T number2;
public:
	// Default constructor 
	MinMax()
	{
		number1 = 0;
		number2 = 0;
	}
	// Constructor 
	MinMax(T n1, T n2)
	{
		number1 = n1;
		number2 = n2;
	}
	// Set the first number
	void setNumber1(T n1)
	{
		number1 = n1;
	}
	// Set the second number
	void setNumber2(T n2)
	{
		number2 = n2;
	}
	// minimum function determines which of the two numbers is the smallest
	T minimum(T n1, T n2)
	{
		if (n1 < n2)
			return n1;
		else
			return n2;
	}
	// maximum function determines which of the two numbers is the largest. 
	T maximum(T n1, T n2)
	{
		if (n1 > n2)
			return n1;
		else
			return n2;
	}
};
#endif