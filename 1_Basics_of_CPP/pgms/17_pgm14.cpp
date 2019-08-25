// C++ program to demonstrate working 
// of "using" to get the same effect as 
// inline. 
#include <iostream> 
using namespace std; 

namespace ns1 
{ 
	namespace ns2 
	{ 
		namespace ns3 
		{ 
			int var = 10; 
		} 
		using namespace ns3; 
	} 
	
	using namespace ns2; 
} 

int main() 
{ 
	cout << ns1::var; 
	return 0; 
} 
