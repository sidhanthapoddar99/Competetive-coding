#include<iostream>
#include<vector>

using namespace std;

int main()
{

    vector<int> arr{1,1,2,2,3,3,4,5,5,6,7,7,8,8};

    int no=0;
    int mod=0;
    vector<int>:: iterator it = arr.begin();

   
    while(it!=arr.end())
    {
        mod=mod^*it;
        it++;
    }
    
    int loc=0;

    int modc=mod;

    while (modc!=0)
    {
        if (modc&1==1)
            break;
        loc++;
        modc=modc>>1;
    }
    

    it=arr.begin();
    while(it!=arr.end())
    {   
        if(((*it>>loc)&1)==1)
         no=no^*it;
         
        it++;         
    }
    cout<<no<<" "<<(no^mod)<<endl<<endl;

    return 0;
}