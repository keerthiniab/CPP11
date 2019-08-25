#include<iostream>
using namespace std;
class A
{
   static int a;
   int b;
public:
   A(int a, int b) // Constructor
   {
       this->a = a; // this.<var> points to the variable of
       this->b = b; // class A while <var> is a formal parameter
   }
   void fun1()
   {
       cout << a << endl; // Acceptable
       cout << b << endl; // Acceptable
   }
   static void fun2()
   {
       cout << a << endl; // Acceptable
       cout << b; // Error!
   }
};
int A::a = 0; // Initialization of static variable 'a'
int main()
{
   A obj(1,2);
   obj.fun1(); // Allowed
   obj.fun2(); // Allowed
   A.fun1(); // Error!
   A::fun2(); // Allowed
}