#include<iostream> 
using namespace std; 

void fun(const int &i) 
{ 
	cout << "1 fun(const int &) called "; 
} 
void fun(int &i) 
{ 
	cout << "2 fun(int &) called " ; 
} 
int main() 
{ 
	const int i = 10; 
	fun(i); 
	return 0; 
} 

