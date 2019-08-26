#include<iostream> 

using namespace std;	 

class Test 
{ 
public: 
	// Error: Virtual member functions cannot be static	 
	virtual static void fun() { } 
}; 
