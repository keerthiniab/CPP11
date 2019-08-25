// C++ code to demonstrate void() 
// returning a void value 
#include<iostream> 
using namespace std; 

// Driver void() returning a void value 
void test() 
{ 
	cout << "Hello"; 

	// Returning a void value 
	return (void)"Doesn't Print"; 
} 
int main() 
{ 
	test(); 
	return 0; 
} 
