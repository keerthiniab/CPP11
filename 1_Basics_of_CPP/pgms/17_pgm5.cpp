//Class can also be declared inside namespace and defined outside namespace-

// A C++ program to demonstrate use of class 
// in a namespace 
#include <iostream> 
using namespace std; 

namespace ns 
{ 
	// Only declaring class here 
	class A; 
} 

// Defining class outside 
class ns::A 
{ 
public: 
	void display() 
	{ 
		cout << "ns::A::display()\n"; 
	} 
}; 

int main() 
{ 
	//Creating Object of A Class 
	ns::A obj; 
	obj.display(); 
	return 0; 
} 
