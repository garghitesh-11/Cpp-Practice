//basic concept of functions in c++
#include <iostream>
using namespace std;
// now we will make a function
int add (int x, int y) { 
int c=x+y;         //no function prototype needed to make here, we already defined the function here
return c;
}
int main ()  {   //main function starts
    int a,b;
    cout<<"enter a="<<endl;
    cin>>a;
    cout<<"enter b="<<endl;
    cin>>b;
    cout<<"sum is= "<<add (a,b)<<endl;
    cout <<"Program ends successfullyyy!!"<<endl;
return 0;
}
