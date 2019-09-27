#include <iostream>
#include <vector>

/*
class T
{

};
 */

vector<int> func (int a)
{
    vector<int> v;    // vector<T> v; 
    v.push_back(10);  // v.push_back(obj1);
    v.push_back(20);  // v.push_back(obj2);
    v.push_back(30);
    v.push_back(40);
    // 
    //
    v.push_back(999);
    v.push_back(100);

    return v; // Idea is to use this temporary object, insted of copying it we will move it back to calling function
}

int main()
{
    vector <int> newv = f(1000); // all the elements of vector v is compied to newv, and vector v will be deleted
}