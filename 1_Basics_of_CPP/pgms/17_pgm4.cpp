//Classes and Namespace

// A C++ program to demonstrate use of class 
// in a namespace 
#include <iostream> 
using namespace std; 

namespace ns 
{ 
	// A Class in a namespace 
	class A 
	{ 
	public: 
		void display() 
		{ 
			cout << "ns::A::display()\n"; 
		} 
	}; 
} 

int main() 
{ 
	// Creating Object of A Class 
	ns::A obj; 

	obj.display(); 

	return 0; 
} 
