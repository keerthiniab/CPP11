//Launching thread using function pointer
void foo(param) 
{ 
	// Do something 
} 
// The parameters to the function are put after the comma 
std::thread thread_obj(foo, params); 


///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////

//Launching thread using lambda expression

// Define a lamda expression 
auto f = [](params) { 
	// Do Something 
}; 

// Pass f and its parameters to thread 
// object constructor as 
std::thread thread_object(f, params); 

////////////////////////////////////////////////
std::thread thread_object([](params) { 
	// Do Something 
};, params); 

///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
// Launching thread using lambda expression

#include <iostream>
#include <thread>
class DisplayThread
{
public:
    void operator()()     
    {
        for(int i = 0; i < 10000; i++)
            std::cout<<"Display Thread Executing"<<std::endl;
    }
};
 
int main()  
{
    std::thread threadObj( (DisplayThread()) );
    for(int i = 0; i < 10000; i++)
        std::cout<<"Display From Main Thread "<<std::endl;
    std::cout<<"Waiting For Thread to complete"<<std::endl;
    threadObj.join();
    std::cout<<"Exiting from Main Thread"<<std::endl;
    return 0;
}

///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////

//Each of the std::thread object has an associated ID and we can fetch using,
//Member function, gives id of associated thread object i.e.

std::thread::get_id()
std::this_thread::get_id()


///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////