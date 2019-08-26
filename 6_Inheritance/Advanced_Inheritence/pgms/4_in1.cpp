#include<iostream> 
using namespace std; 

class Base { 
	public: 
		virtual int fun(int i) { } 
}; 

class Derived: public Base { 
	private: 
		int fun(int x) { } 
}; 

int main() 
{
	Derived d; 
	d.fun(1); 
	return 0; 
} 

