
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool compare(string a, string b)
{
    // normal ascending order
     return a<b;

}

int main()
{
    // we would be given a list of string and we need to sort it
    int n;
    cin>>n;
    cin.get();
    
    string s[n];

    for(int i=0;i<n;i++)
    getline(cin,s[i]);

    sort(s,s+n,compare);

    for(string st:s)
    cout<<st<<endl;
}
