#include<iostream>
using namespace  std;
int main()
{
     int j=1 ,i=3, x=15;
    // int m1=(-1)<<(i+1);
    // int m2=~((-1)<<j);
    //  x=31&(m1|m2);
    // cout<<x;
    // return 0;
    int mask=-1<<(i-j+1);
    mask=~mask;
    mask=mask<<j;
    mask=~mask;
    int y=2;

    cout<<((x&mask)|y<<j);
    return 0;

} 
