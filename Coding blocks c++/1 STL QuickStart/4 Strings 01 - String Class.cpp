/*
sting class - no need to create a character array
wraps a character array 
*/

//___________________IMP_______________

// getw(cin,s) ----> get word
// getline(cin,s) ----> get line


#include<iostream>
#include<string>

using namespace std;
int main()
{
    string s0;
    string s1("Hello World!");
    string s2="hello World";
    string s3(s2);
    string s4=s3;
    

    char a[]={'a','b','c','d','\n'};

    string s5(a);
    cout<<s1<<endl<<s2<<endl<<s3<<endl<<s4;


    /*

    ______________string functions______________
    s.empty() bool
    
    s.append("str")
    s+="str"

    s.clear()

    s.length()

    s1.compare(s2) //lexographical comparision
    s1<s2 // overloaded operators

    string sub = s.substr(pos + 1);
    ______________indexing______________
    s[0]

    s.find("apple")

    ______________remove a word______________
    s.erase(st_index,length to remove)

    ______________iterate over all chracters______________

    for(int i=0;i<s.length();i++)
    {
        cout<<s0[i]<<":";
    }

    for(auto it=s0.begin();it!=s0.end();it++)
    {
        cout<<(*it)<<",";
    }

    for(char c:s0)
    {
        cout<<c;
    }
    for(string::iterator it=s0.begin();it!=s0.end();it++)
    {
        cout<<(*it)<<",";
    }

    */

    /* 
    int *a 
    -> here start *a reffers to the Value and  
    a represents the location or the reference
    
    if the variable is defind as a reference like 
    auto a  or  int *a
    *a reffers to the value 

    if variable is defined as 
    int a;then 
    &a reffers to the location
    *a reffers to the value at location(a)
    */  

    for(auto it=s1.begin();it!=s1.end();it++)
    {
        cout<<(*it)<<",";
    }
    //auto is used to automatically asign the data type 
}