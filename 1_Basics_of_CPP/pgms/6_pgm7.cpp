#include <stdio.h> 
#define CUBE(b) b*b*b 
int main() 
{ 
	printf("%d", CUBE(1+2)); 
	return 0; 
} 

////////////////////////////////////////////////////////
////////////////////////////////////////////////////////
#include <stdio.h> 
int cube(int a) 
{ 
	return a*a*a; 
} 
int main() 
{ 
	printf("%d", cube(1+2)); 
	return 0; 
} 
