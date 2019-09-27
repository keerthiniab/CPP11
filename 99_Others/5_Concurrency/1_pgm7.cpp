
// this_thread - to get id
int main()
{
    std::string s = "Kathy Perry";
    std::thread t(&thread;_function, std::move(s));
    std::cout << "main thread message = " << s << std::endl;

    std::cout << "main thread id = " << std::this_thread::get_id() << std::endl;
    std::cout << "child thread id = " << t.get_id() << std::endl;

    t.join();
    return 0;
}

// how many threads
int main()
{
    std::cout << "Number of threads = " 
              <<  std::thread::hardware_concurrency() << std::endl;
    return 0;
}