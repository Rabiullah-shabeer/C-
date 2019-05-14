#include <iostream>

using namespace std;
const double CENTIMETERS_PER_INCHE=2.54;
const int INCHES_PER_FOOT=12;
int main()
{
int inches,feet,totalinches;
double centimeter;
 cout<<"Enter two numbers one for feet and one for inches\n";
 cout<<"feet=";
 cin>>feet;
 cout<<"inches=";
 cin>>inches;
 totalinches=INCHES_PER_FOOT*feet+inches;
 cout<<" total inches=";
 cout<<totalinches<<endl;
 centimeter=CENTIMETERS_PER_INCHE*totalinches;
 cout<<"the number of centimeter="<<centimeter<<endl;

    return 0;
}
