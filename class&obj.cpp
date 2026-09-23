#include <iostream>
using namespace std;

class Student   //a class with it's name student
{
public:  //accesss specifiers
    string name;  //Data members
    int rollNo;   //Data members

    void display()   //This is called a member function because it belongs to the class.
    {
        cout << name << endl;
        cout << rollNo << endl;
    }
};