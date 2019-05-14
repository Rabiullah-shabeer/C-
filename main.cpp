#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
int i,u,t,ARR[5]={4,19,1,3,5};
for (u=4;u>=1;u--)
for (i=0;i<u;i++)
if (ARR[i]>ARR[i+1])
{
    t=ARR[i];
    ARR[i]=ARR[i+1];
    ARR[i+1]=t;
}
cout <<"Sorted values"<<endl;
for(i=0;i<=4;i++)
    cout <<ARR[i]<<endl;
    return 0;
}
