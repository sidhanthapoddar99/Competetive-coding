#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[]={ 1,10,11,9,100};
    int n= sizeof(arr)/sizeof(int);//size of the array
    int key;
    cin>>key;
    auto id = find(arr,arr+n,key);
    // find ->  {index of the search} find(Start_location, End_location, key)
    cout<<id-arr; // index of data - base index; 
}