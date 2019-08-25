// C++ program to explain destructors 

#include <bits/stdc++.h> 
using namespace std; 
class A 
{ 
	public: 
	int id; 
	
	//Definition for Destructor 
	~A() 
	{ 
		cout << "Destructor called for id: " << id <<endl; 
	} 
}; 

int main() 
{ 
	A obj1; 
	obj1.id=7; 
	int i = 0; 
	while ( i < 5 ) 
	{ 
		A obj2; 
		obj2.id=i; 
		i++;		 
	} // Scope for obj2 ends here 

	return 0; 
} // Scope for obj1 ends here 
