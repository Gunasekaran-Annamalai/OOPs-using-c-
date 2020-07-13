// simple program using "function overloading"
#include<iostream>
using namespace std;
class functionOverloading
{
    public:
        float function(double x, int y)
        {
            return x; // it will return a float value
        }

        int function(int x, double y)
        {
            return x + y; // it will return a integer value
        }

        void function(int x, string name)
        {
            cout << "from void function : "<< x << " - " << name;
        }
};

int main(void)
{
    functionOverloading fo;
    cout << fo.function(5.76, 10) << endl;
    cout << fo.function(12, 3.5) << endl;
    fo.function(5, "John");
}