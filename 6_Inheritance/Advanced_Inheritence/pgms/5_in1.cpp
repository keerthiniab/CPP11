#include <iostream>
using namespace std;

class Base { int x, y; }; 

class Derived : public Base { int z, w; }; 

int main() 
{ 
	Derived d; 
	Base b = d; // Object Slicing, z and w of d are sliced off 
}

