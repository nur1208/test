#include <thread>
#include <iostream>

void foo()
{
    std::cout << "Hello !\n";   
}

int main()
{
    std::thread([&]
    {
        while(true)
        {
            // Wait 5 minutes
            std::this_thread::sleep_for(std::chrono::seconds(5));
            // Call our method
            foo();
        }
    }).detach();

    // Execution continues ...
    std::cin.get();
}