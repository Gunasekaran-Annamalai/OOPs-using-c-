// Finding Mean value using "friend function"
#include<iostream>
using namespace std;
class meanValue
{
    private:
        int mean;
        int value;

    public:
        friend int findMean( meanValue, int );
};

int findMean( meanValue mv, int limit)
{
    int series;
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
