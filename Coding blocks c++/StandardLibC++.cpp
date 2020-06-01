#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	// #ifndef ONLINE_JUDGE
 //    // for getting input from input.txt
 //    freopen("input.txt", "r", stdin);
 //    // for writing output to output.txt
 //    freopen("output.txt", "w", stdout);
	// #endif
	
	int arr[] ={1,10,11,9,100};
	int n=sizeof(arr)/sizeof(int);
	int  key;
	cin>>key;
	auto it =find(arr,arr+n,key);
	int index=it-arr;
	cout<<index;


	return 0;
}