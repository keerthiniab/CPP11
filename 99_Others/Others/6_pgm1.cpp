/////// constexpr ///////

/* The keyword constexpr was introduced in C++11 and improved in C++14. 
   It means constant expression. Like const, it can be applied to variables so that a compiler error 
   is raised if any code attempts to modify the value. */

// * Unlike const, constexpr can also be applied to functions and class constructors. 
// * constexpr indicates that the value, or return value, is constant and, if possible, is computed at compile time.

//The main idea is performance improvement of programs by doing computations at compile time rather than run time
//==================================================================================================================//

#include <iostream>

//==================================================================================================================//
// constexpr function for product of two numbers. 
// By specifying constexpr, we suggest compiler to 
// to evaluate value at compiler time 
constexpr int product(int x, int y) 
{ 
	return (x * y); 
} 

int main() 
{ 
	const int x = product(10, 20); 
	std::cout << x; 
	return 0; 
} 
