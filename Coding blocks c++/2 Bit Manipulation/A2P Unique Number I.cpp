#include <iostream>
#include <list>

using namespace std;

int main()
{
    // find the number which are not in pair
    //

    list<int> l{1,1,2,2,3,3,4,4,5,6,6,7,7,8,8,9,9};
    int x=0;  
    for(auto i=l.begin();i!=l.end();i++)
    x=x^*i;
    
    cout<<x<<endl;
    
}
