#include <iostream>

using namespace std;

int main()
{
int n,f1=0,f2=1,f3=1;
 cout<<"Enter a number:";
 cin >>n;
 cout <<f1<<"\t"<<f2;
 while (f3<n)
  {
f3=f1+f2;
cout<<"\t"<<f3;
f1=f2;
f2=f3;
  }
    return 0;
}
