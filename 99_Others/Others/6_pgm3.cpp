// C++ program to demonstrate uses of constexpr in constructor 
#include <bits/stdc++.h> 
using namespace std; 

// A class with constexpr constructor and function 
class Rectangle 
{ 
	int _h, _w; 
public: 
	// A constexpr constructor 
	constexpr Rectangle (int h, int w) : _h(h), _w(w) {} 
	
	constexpr int getArea () { return _h * _w; } 
}; 

// driver program to test function 
int main() 
{ 
	// Below object is initialized at compile time 
	constexpr Rectangle obj(10, 20); 
	cout << obj.getArea(); 
	return 0; 
} 
