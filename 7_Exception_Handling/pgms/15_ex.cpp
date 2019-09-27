#include <iostream> 
using namespace std; 

class MyExcept1 {}; 

class MyExcept2 
{ 
public: 

	// Conversion constructor 
	MyExcept2 (const MyExcept1 &e ) 
	{ 
		cout << "Conversion constructor called"; 
	} 
}; 

int main() 
{ 
	try
	{ 
		MyExcept1 myexp1; 
		throw myexp1; 
	} 
	catch(MyExcept2 e2) 
	{ 
		cout << "Caught MyExcept2 " << endl; 
	} 
	catch(...) 
	{ 
		cout << " Defaule catch block " << endl; 
	} 
	return 0; 
}

//As a side note, the derived type objects are converted to base typr when a derived object is 
//thrown and there is a catch block to catch base type 

