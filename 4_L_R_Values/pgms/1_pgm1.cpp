#include <iostream>
using namespace std;

int fun(int & a)
{
    cout << "In l-value Reference" << endl;
    cout << "a : " << a << endl;
}

int fun(int && a)
{
    cout << "In r-value Reference" << endl;
    cout << "a : " << a << endl;
}

int getval()
{
    int k = 8;
    return k;
}
int main()
{
    cout << "=====================================start\n";
    int i = 10;
    fun(i);
    fun(5);
    fun(getval());
    cout << "=====================================end\n";
    return 0;
}