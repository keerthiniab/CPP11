#include <iostream>

class Number
{
public:
	int i;
	Number() { i = 0; }
	int one() { return i+1; }
	int two() { return i+2; }
};

int main()
{
	Number object; //Create a new 'Number' object named 'object'
	int (Number::*NumberPtr)(); //Declare a pointer to member functions in "Number" of type 'int' with takes no params

	NumberPtr = &Number::one;
	std::cout << (object.*NumberPtr)() << "\n";

	NumberPtr = &Number::two;
	std::cout << (object.*NumberPtr)() << "\n";

	return 0;
}
