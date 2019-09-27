//Mutex
int accum = 0;
mutex accum_mutex;

void square(int x) {
    int temp = x * x;
    accum_mutex.lock();
    accum += temp;
    accum_mutex.unlock();
}

// Atomic - We don't need to introduce temp here, 
// since x * x will be evaluated before handed off to accum, so it will be outside the atomic event.
#include <atomic>

atomic<int> accum(0);

void square(int x) {
    accum += x * x;
}