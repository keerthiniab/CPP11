#include <iostream>
#include <vector>

template <typename T>
void swap(T& a, T& b)
{
    T temp = std::move(a);
    a = std::move(b);
    b = std::move(temp);
}

void print(std::vector<int> & v)
{
    for(auto it=v.begin(); it!=v.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << "\n";
}

int main()
{
    std::vector<int> v1;
    std::vector<int> v2;

    for(auto i=0; i<5; i++)
    {
        v1.push_back(i);
    }

    for(auto i=10; i<15; i++)
    {
        v2.push_back(i);
    }

    std::cout << "v1 : ";
    print(v1);
    std::cout << "v2 : ";
    print(v2);
    std::cout << "==================================\n";

    //v2 = std::move(v1);
    //swap(v1,v2);

    std::cout << "v1 : ";
    print(v1);
    std::cout << "v2 : ";
    print(v2);

    return 0;
}