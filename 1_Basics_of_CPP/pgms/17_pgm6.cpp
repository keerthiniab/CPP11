// A C++ code to demonstrate that we can define 
// methods outside namespace. 
#include <iostream> 
using namespace std; 

// Creating a namespace 
namespace ns 
{ 
	void display(); 
	class A 
	{ 
	public: 
	void display(); 
	}; 
} 

// Defining methods of namespace 
void ns::A::display() 
{ 
	cout << "ns::A::display()\n"; 
} 
void ns::display() 
{ 
	cout << "ns::display()\n"; 
} 

// Driver code 
int main() 
{ 
	ns::A obj; 
	ns::display(); 
	obj.display(); 
	return 0; 
} 
