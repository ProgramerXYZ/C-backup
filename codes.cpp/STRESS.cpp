#include <iostream>
#include <thread>
#include <vector>
using namespace std;
void stress()
{
    while (1)
        ;
}
int main()
{
    vector<thread> threads;
    for (int i = 0; i < thread::hardware_concurrency(); i++)
        threads.push_back(thread(stress));
    for (auto &t : threads)
        t.join();
}
