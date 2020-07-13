// Finding Mean value using "friend function"
#include<iostream>
using namespace std;
class meanValue
{
    private:
        int mean;
        int value;

    public:
        // declaring friend function using friend keyword
        friend int findMean( meanValue, int );
};

// defining friend function
int findMean( meanValue mv, int limit)
{
    int series;
    // accessing the private members out side the class
    mv.mean = 0;
    mv.value = 0;
    for (int i = 0; i < limit; i++)
    {
        cin >> series;
        mv.value += series;
    }
    cout << "The mean value of given series is : ";
    return mv.mean = mv.value / limit;
}

int main(void) {
    meanValue m;
    cout << findMean(m, 5);
}
