// Adding two Complex numbers using "object as argument"
#include<iostream>
using namespace std;

class complex
{
    private:
        int real, img;

    public:
        void setValues(int r, int i)
        {
            real = r;
            img = i;
        }

        void sumComplex( complex c1, complex c2)
        {
            real = c1.real + c2.real;
            img = c1.img + c2.img;
        }

        void displaySum()
        {
            cout << "The sum of two given complex numbers are : ";
            if( img < 0)
                cout << real << " - " << img << "i";
            else
                cout << real << " + " << img << "i";
        }
};

int main()
{
    complex com1, com2, com3;
    int real, img;
    cout << "Enter the real and imaginary number : "<<endl;
    cout << "real-number-1 : ";
    cin >> real;
    cout << "imaginar-number-1 : ";
    cin >> img;
    com1.setValues(real, img);
    cout << "real-number-2 : ";
    cin >> real;
    cout << "imaginar-number-2 : ";
    cin >> img;
    com2.setValues(real, img);
    com3.sumComplex(com1, com2);
    com3.displaySum();
}