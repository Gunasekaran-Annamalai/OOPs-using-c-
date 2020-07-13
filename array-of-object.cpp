// Students detail processing using "array of objects"
#include<iostream>
using namespace std;
class students
{
    private:
        char name[30];
        int rollno;
        char department[20];
        int semester;
        int marks[20];
        int total;
        float average;
    public:
        void getDetails();
        void process();
        void display();
};

void students::getDetails()
{
    cout << "-----Enter student details-----" << endl;
    cout << "Enter student name : ";
    cin >> name;
    cout << "Enter student rollno : ";
    cin >> rollno;
    cout << "Enter student department : ";
    cin >> department;
    cout << "Enter current semester in number : ";
    cin >> semester;
}

void students::process()
{
    total = 0;
    for (int i = 1; i <= 5/* number_of_subjects */; i++)
    {
        cout << "Enter mark-" << i << " : ";
        cin >> marks[i];
        total += marks[i];
    }
    average = total / 5;
}

void students::display()
{
    cout << "-----Personal details-----" << endl;
    cout << "Name : " << name << endl;
    cout << "Roll No. : " << rollno << endl;
    cout << "Department : "<< department << endl;
    cout << "Semester : " << semester << endl;
    cout << "-----Mark details-----" << endl;
    for (int i = 1; i <= 5; i++)
    {
        cout << "mark-" << i << " : " << marks[i] << endl;
    }
    cout << "Total-marks : " << total << endl;
    cout << "Average : " << average << endl;
}

int main(void)
{
    int number_of_students;
    cout << "Enter number of students : ";
    cin >> number_of_students;
    students s[100]; // creating array of objects
    for (int i = 0; i < number_of_students; i++)
    {
        s[i].getDetails();
        s[i].process();
    }
    for (int i = 0; i < number_of_students; i++)
    {
        cout << "\n-----Student-" << i+1 << " details-----\n" << endl;
        s[i].display();
    }
}