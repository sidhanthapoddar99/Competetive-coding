
#include<iostream>
#include<stack>
using namespace std;

int power(int m)
{
    stack<int> vals; // not using bool as access time of bool is much larger than int
    int mod=0;
    while(m!=0)
    {
        mod= m&1;
        m=m>>1;
        vals.push(mod);
    }

    int po=0;
    while(!vals.empty())
    {
        po*=10;
        po+=vals.top();
        vals.pop();
    }


    return po;
}


int main()
{
    int m;
    cin>>m;

    cout<<power(m);
    return 0;
}