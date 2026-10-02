/*#include <iostream>
using namespace std;
int main () {
int i;  //printing number from 1 to 20
for (i=1;i<=20;i++)
cout<<i<<endl;
    return 0;
}
*/ //success
#include <iostream>
using namespace std;
//printing the sum of n natural numbers
int main () {
int i,n, sum=0;
cout<<"enter upto how much numbers sum you want?"<<endl;
cin>>n;
cout<<"we will calculate the sum upto"<<n<<endl;
for (i=1;i<=n;i++)
{
    sum=sum+i;
}
cout<<"sum is = "<<sum<<endl;
    return 0;
}