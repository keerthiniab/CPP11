
class T
{
    //SAMPLE CLASS
};

T foo(T obj) //temporary object created due to pass by value -  solution is to pass by value
{
    T temp; // the effort was not used at all
    //
    //
    return temp; //temporary object created due to retuen by value - no solution 
}

int main()
{
    T tobj;
    T f = foo(tobj);
}