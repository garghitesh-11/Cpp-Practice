#include <iostream>
using namespace std;
int sum (int a, int b);   //function declaration or function prototype

int main () 
{          //inside main function we will call the function
cout<<"hello, program starts"<<endl;
int p,q;
cout<<"enter p= "<<endl;
cin>>p;
cout<<"enter q= "<<endl;
cin>>q;
cout<<"sum of p and q is = "<<sum (p,q)<<endl;
cout<<"program ended sucessfully"<<endl;
    return 0;
}
int sum (int a, int b){  //function defination after the main function
    int c=a+b;
    return c;
}

