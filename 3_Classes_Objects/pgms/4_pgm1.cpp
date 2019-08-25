#include<iostream> 
using namespace std; 

class A
{
    public:
    int a = 10;
    int b = 20;
};

int main()
{
    A x;
    
    cout << "a:" << x.a << " b:" << x.b << endl;

    x.a = 5;
    x.b = 15;

    cout << "a:" << x.a << " b:" << x.b << endl;
}