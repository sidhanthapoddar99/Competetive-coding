#include <iostream>
#include <list>

using namespace std;

void prtL(list<int> no)
{
    no.reverse();
    for(auto i= no.begin();i!=no.end();i++)
    cout<<*i;
    no.reverse();
    cout<<endl;
}

int main()
{
    int n=100;

    list<int> no;
    no.push_front(1);
    //no.push_front(2);
    for(int i=1;i<n;i++)
    {
        list<int> :: iterator j=no.begin();
        int carry=0;
        int mul;
        for(j=no.begin();j!=no.end();j++)
        {
            mul=*j*i+carry;
            *j=mul%10;
            carry=(int)mul/10;
                        
        }
        while(carry!=0)
        {
            no.push_back(carry%10);
            carry=(int)carry/10;

        }
        cout<< i << "  ";
        prtL(no);

    }

   prtL(no);

    return 0;
}