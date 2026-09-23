#include <iostream>
using namespace std;
int add (int *a, int *b) 
{
    int c=*a+*b;
    return c;
}
int main () {
int x,y;
cout<<"enter 1st number"<<endl;
cin>>x;
cout<<"enter 2nd number"<<endl;
cin>>y;
cout<<"sum is "<<add(&x,&y);
    return 0;
}