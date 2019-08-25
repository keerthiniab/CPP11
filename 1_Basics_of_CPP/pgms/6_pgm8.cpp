//A void function can do return
#include <iostream> 
using namespace std; 

void fun() 
{ 
    cout << "Hello"; 

    // We can write return in void 
    return; 
} 

int main() 
{ 
    fun(); 
    return 0; 
} 
