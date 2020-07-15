// finding factors of given number using "static function"
#include<iostream>
using namespace std;
int size;
class staticFunction
{
    private:
        static int factor[100]; // creating static variable

    public:
        // defining static function
        static int* findFactor(int number) // using pointer to return an array
        {
            int temp;
            size = 0;
            for (int i = 1; i <= number; i++)
            {
                if(number % i == 0)
                {
                    temp = size++;
                    factor[temp] = i;
                }
            }
            return factor; // this will return an array
        }
};

int staticFunction::factor[100];

int main(void)
{
    cout << "Enter a number to find it\'s factors : ";
    int number;
    cin >> number;
    // calling static function using class name because, we can't call it using object
    int* var = staticFunction::findFactor(number); // using pointer variable to store an array
    for (int i = 0; i < size; i++)
    {
        cout << var[i] << endl;
    }
}