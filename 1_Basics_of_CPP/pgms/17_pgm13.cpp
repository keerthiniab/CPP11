// C++ program to demonstrate working of 
// inline namespaces inside inline namespaces 

#include <iostream> 
using namespace std; 

namespace ns1 
{ 
	inline namespace ns2 
	{ 
		inline namespace ns3 
		{ 
			int var = 10; 
		} 
	} 
} 

int main() 
{ 
	cout << ns1::var; 
	return 0; 
} 
