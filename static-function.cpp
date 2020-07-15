#include<iostream>
using namespace std;
class staticFunction
{
    private:
        static int factor;
        static int arr[100];

    public:
        static int* findFactor()
        {
            arr[0] = 1;
            return arr;
        }
};

int staticFunction::arr[100];

int main(void)
{
    int* var = staticFunction::findFactor();
    cout << var[0];
}