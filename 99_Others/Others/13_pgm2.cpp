//  to make class non inheritable

#include <iostream> 
class Base final 
{ 
}; 

class Derived : public Base 
{ 
}; 

int main() 
{ 
	Derived d; 
	return 0; 
} 


