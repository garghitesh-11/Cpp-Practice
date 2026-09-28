#include <iostream>  //header file 
using namespace std;    //we used a library named std, which contains cin, cout and other functions..

class Student   //a class with it's name student
{
public:  //accesss specifiers
    string name;  //Data members
    int rollNo;   //Data members

    void displays()   //This is called a member function because it belongs to the class.
    {
        cout << name << endl;
        cout << rollNo << endl;
    }
};
int main () {  //main functions starts
    Student s1;  //s1 object created
    s1.name="hitesh" ;
    s1.rollNo=1100;
    s1.displays ();
    return 0;
}