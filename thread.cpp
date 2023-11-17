#include <iostream>
#include <thread>

void exec(int i) {
    std::cout << "Thread " << i << " is running\n";
}

int main() {
    std::thread t1(exec, 1); // create and launch thread 1
    std::thread t2(exec, 2); // create and launch thread 2
    std::cout << "Main thread is running\n";
    t1.join(); // wait for thread 1 to finish
    std::cout << "Thread 1 has finished\n";
    t2.join(); // wait for thread 2 to finish
    std::cout << "Thread 2 has finished\n";
    return 0;
}
