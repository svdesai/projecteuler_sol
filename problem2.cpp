#include <iostream>
using namespace std;
int main()
{
    int sum = 2;
    int fib_prev_prev = 1;
    int fib_prev = 2;
    int fib;
    do {
        fib = fib_prev + fib_prev_prev;
        if(fib % 2 == 0)
            sum += fib;
        fib_prev_prev = fib_prev;
        fib_prev = fib;
    } while(fib <= 4000000);
    cout << sum;
}
