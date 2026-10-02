/*
#include <iostream>
using namespace std;
int main () {
int a,b,c;
cout<<"enter values of a,b,c for comparison = "<<endl;
cin>>a>>b>>c;
if ((a>b)&&(a>c))  {
cout<<"a is greatest"<<endl;
}
else if ((b>a)&&(b>c))
{
    cout<<"b is greatest"<<endl;
}
else {
    cout <<"c is greatest"<<endl;
}


    return 0;
} 
    */
   //making a calculator with switch statement
   #include <iostream>
   using namespace std;
   int main () {
   int a,b,operation;
   cout<<"enter the 2 numbers"<<endl;
   cin>>a>>b;
  cout<<"enter the operation"<<endl;
  cin>>operation;
   
   switch (operation)
   {
   case 1:
    cout<<(a+b);
    break;
   case 2:
   cout<<(a-b);
   break;
   case 3:
   cout<<(a*b);
   break;
   case 4:
   cout<<(a/b);
   break;

   default:"invalid choice";
    break;
   }

    return 0;
   }
   //New thing learnt-- inside switch statements we cannot use strings
   // break statemnet is important so another cases do not give us the output