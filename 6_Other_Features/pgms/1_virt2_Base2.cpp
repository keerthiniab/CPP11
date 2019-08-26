int main()
{
    D1 d1;
}
//Because d1 is a D1 object, d1 has its *__vptr set to the D1 virtual table.
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    D1 d1;
    Base *dPtr = &d1;
}
//Note that because dPtr is a base pointer, it only points to the Base portion of d1. 
//However, also note that *__vptr is in the Base portion of the class, so dPtr has access to this pointer. 
//Finally, note that dPtr->__vptr points to the D1 virtual table! Consequently, 
//even though dPtr is of type Base, it still has access to D1’s virtual table (through __vptr).
/////////////////////////////////////////////////////////////////////////////////

//So what happens when we try to call dPtr->function1()?
int main()
{
    D1 d1;
    Base *dPtr = &d1;
    dPtr->function1();
}
//First, the program recognizes that function1() is a virtual function. 
//Second, the program uses dPtr->__vptr to get to D1’s virtual table. 
//Third, it looks up which version of function1() to call in D1’s virtual table. 
//This has been set to D1::function1(). Therefore, dPtr->function1() resolves to D1::function1()!
/////////////////////////////////////////////////////////////////////////////////

//Now, you might be saying, “But what if dPtr really pointed to a Base object instead of a D1 object. Would it still call D1::function1()?”. The answer is no.
int main()
{
    Base b;
    Base *bPtr = &b;
    bPtr->function1();
}

//In this case, when b is created, __vptr points to Base’s virtual table, not D1’s virtual table. 
//Consequently, bPtr->__vptr will also be pointing to Base’s virtual table. 
//Base’s virtual table entry for function1() points to Base::function1(). 
//Thus, bPtr->function1() resolves to Base::function1(), which is the most-derived version of function1() that 
//a Base object should be able to call.
/////////////////////////////////////////////////////////////////////////////////