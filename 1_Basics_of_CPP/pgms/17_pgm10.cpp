#include <iostream> 

namespace name1 
{ 
	namespace name2 
	{ 
		namespace name3 
		{ 
			int var = 42; 
		} 
	} 
} 

// Aliasing 
namespace alias = name1::name2::name3; 

int main() 
{ 
	std::cout << alias::var << '\n'; 
} 
