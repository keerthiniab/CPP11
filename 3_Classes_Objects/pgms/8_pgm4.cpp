#include<iostream> 
#include<cstring> 
using namespace std; 

class String 
{ 
private: 
	char *s; 
	int size; 
public: 
	String(const char *str = NULL); // constructor 
	~String() { delete [] s; }// destructor 
	void print() { cout << s << endl; } 
	void change(const char *); // Function to change 
}; 

String::String(const char *str) 
{ 
	size = strlen(str); 
	s = new char[size+1]; 
	strcpy(s, str); 
} 

void String::change(const char *str) 
{ 
	delete [] s; 
	size = strlen(str); 
	s = new char[size+1]; 
	strcpy(s, str); 
} 

int main() 
{ 
	String str1("Hello"); 
	String str2 = str1; 

	str1.print(); // what is printed ? 
	str2.print(); 

	str2.change("Good Morning"); 

	str1.print(); // what is printed now ? 
	str2.print(); 
	return 0; 
} 

