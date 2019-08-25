// Sample C++ code to demonstrate the 
// incorrect syntax of declaring a member 
// function as deleted 
class C 
{ 
public: 
	C(); 
}; 

// Error, the deleted definition 
// of function C must be the first 
// declaration of the function. 
C::C() = delete; 
