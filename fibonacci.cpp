// Fibonacci series using "class and object"
#include<iostream>
using namespace std;
class fibonacci
{
private:
    int a = 0;
    int b = 1;
    int c;
public:

    // using constructor or special function
    fibonacci(int size)
    {
        cout << "The fibonacci series : ";
        cout << a << b;
        for (int i = 2; i <= size; i++)
        {
            c = a + b;
            a = b;
            b = c;
            cout << b;
        }
        cout << "\nThe last fibonacci number in series : " << b;
    }

    // using recursion function
    int fiboRecursion(int times)
    {
        if(times == 0 || times == 1)
            return times;
        return fiboRecursion(times - 1) + fiboRecursion(times - 2);
    }
};

int main(void) {
    int limit;
    cout << "Enter the limit : ";
    cin >> limit;
    fibonacci fibo(limit);
    cout << "\nFibonacci using recursion : " << fibo.fiboRecursion(limit);
}