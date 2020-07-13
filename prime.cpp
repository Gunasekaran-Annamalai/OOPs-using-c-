// prime number using "constructor"
#include<iostream>
using namespace std;
class prime
{
private:
    int flag = 0;
public:
    prime(int n)
    {
        for (int i = 2; i < n / 2; i++)
        {
            if (n % i == 0)
            {
                cout << "it is not a prime number";
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            cout << "it is a prime";
    }
};

int main(void) {
    int number;
    cout << "Enter the number to check : ";
    cin >> number;
    prime primeObject(number);
}