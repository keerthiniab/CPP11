// C++ program to illustrate dynamic allocation 
// and deallocation of 2D array
#include <iostream> 
using namespace std; 

int main () 
{ 
    int colCount= 5;
    int rowCount = 4;

    int** a = new int*[rowCount];
    for(int i = 0; i < rowCount; ++i)
    {
        a[i] = new int[colCount];
    }

    int val = 0;
    for(int i = 0; i < rowCount; ++i)
    {
        for(int j = 0; j < colCount; ++j)
        {
            a[i][j] = ++val;
            cout << "a[" << i << "][" << j << "] : " << a[i][j] << "\n";
        }
    } 

    //deallocating 2D array
    for(int i = 0; i < rowCount; ++i) 
    {
        delete [] a[i];
    }
    delete [] a;

    return 0;
}
