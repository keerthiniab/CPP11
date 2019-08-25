// C++ program to demonstrate accessing of variables 
// in normal way, i.e., using "using" directive 
#include <iostream> 
using namespace std; 

namespace A 
{ 
	int rel = 300; 
} 

// use of ‘using’ directive 
using namespace A; 

int main() 
{ 
// variable ‘rel’ accessed 
// without using scope resolution variable 
    cout << rel << "\n";	 //prints 300 
    return 0; 
} 
