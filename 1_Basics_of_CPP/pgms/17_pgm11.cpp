// file1.h  
namespace foo 
{ 
    int value()  
    {  
       return 5;     
    } 
} 

// file2.cpp - Not to be executed online 
#include <iostream> 
#include “file1.h” // Including file1 
using namespace std; 
  
int main ()  
{ 
    cout << foo::value(); 
    return 0; 
} 