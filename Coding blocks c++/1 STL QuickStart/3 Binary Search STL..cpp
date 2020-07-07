#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[]={ 1,10,10,40,40,40,40,50,60,100};
    int n= sizeof(arr)/sizeof(int);//size of the array
    int key;
    cin>>key;


    bool present = binary_search(arr,arr+n,key);
    // binary search ->  {0,1 present or not} binary_search(Start_location, End_location, key)
    if(present)
        cout<<"present";
    else
        cout<<"not present";

    //lower bound  first occurence of element >= the key
    //upper bound  first occurence of element > the key

    auto lb= lower_bound(arr,arr+n,key);
    auto ub= upper_bound(arr,arr+n,key);

    cout<<"\nlower bound: "<<lb-arr;
    cout<<"\nupper bound: "<<ub-arr;

    // they can be used to find the frequency of an element in O(log(n)) time in a sorted array

    cout<<"\nFrequency :"<<ub-lb<<endl<<endl;
    // to note in frequnecy == 0  then not present




}