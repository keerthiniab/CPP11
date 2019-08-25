// C++ program to demonstrate constructors 

#include <bits/stdc++.h> 
using namespace std; 
class A 
{ 
	public: 
	int id; 
	
	//Default Constructor 
	A() 
	{ 
		cout << "Default Constructor called" << endl; 
		id=-1; 
	} 
	
	//Parametrized Constructor 
	A(int x) 
	{ 
		cout << "Parametrized Constructor called" << endl; 
		id=x; 
	} 
}; 
int main() { 
	
	// obj1 will call Default Constructor 
	A obj1; 
	cout << "Id is: " <<obj1.id << endl; 
	
	// obj1 will call Parametrized Constructor 
	A obj2(21); 
	cout << "Id is: " <<obj2.id << endl; 
	return 0; 
} 
