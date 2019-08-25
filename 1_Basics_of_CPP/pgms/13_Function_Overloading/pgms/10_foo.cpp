// PROGRAM 2 (Compiles and runs fine) 
#include<iostream> 
using namespace std; 

void fun(char *a) 
{ 
	cout << "non-const fun() " << a; 
} 

void fun(const char *a) 
{ 
	cout << "const fun() " << a; 
} 

int main() 
{ 
	const char *ptr = "Hello"; 
	fun(ptr); 
	return 0; 
} 

