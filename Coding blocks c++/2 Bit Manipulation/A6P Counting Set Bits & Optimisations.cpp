#include<iostream>

using namespace std;

int count_normal(int m)
{
    int c=0;
    int mod=0;
    while(m!=0)
    {
        mod= m&1;
        m=m>>1;
        c+=mod;
    }

    return c;
}

int count_fast(int m)
{
    int c=0;
    while (m!=0)
    {
        m= m&(m-1);
        c++;
    }
    return c;
}
int main()
{
    int m;
    cin>>m;

    cout<<count_normal(m)<<endl<<count_fast(m);
    cout<<__builtin_popcount(m);

    return 0;
}