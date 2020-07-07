#include<iostream>
#include<cstring>
#include <string>
using namespace std;
int main()
{
    string s="this is a rainy day";
    // we need to break the string into tokens
    // 

    char arr[s.length()+1];
    strcpy(arr,s.c_str());
    //char *ptr=strtok(arr," ");
    //OR
    //auto ptr=strtok(arr," ");
    
    for(auto it=strtok(arr," ");it!=NULL;it=strtok(NULL," "))
    {
        cout<<it;
    }



    return 1;
}