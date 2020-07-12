#include<list>
#include<unordered_map>
#include<iostream>

using namespace std;


    int st,ed;

    bool palindrome(string &s, int str,int edd)
    {
        for(;str<edd;str++,edd--)
        {
            if(s[str]!=s[edd])
                return false;
        }
        //cout<<"true";
        return true;
    }
    
    int PalC(string &s,int i,list<int> :: iterator j)
    {
        //auto j=v.end();
        j--;
        for(;*j>=i;j--)
        {
            if(palindrome(s, i,*j))
                return *j;
            if((ed-st)>(*j-i))
                return i;
        }
        return i;
    }
        
    
    
    string longestPalindrome(string s) {
        unordered_map<char,list<int>> lst;
        for(int i=0;i<s.length();i++)
        {
         lst[s[i]].push_back(i);   
        }
        st=0,ed=0;
        for(int i=0;i<s.length();i++)
        {
            //int stx=i;
            int edx=PalC(s,i,lst[s[i]].end());
            
            if((edx-i)>(ed-st))
            {
                cout<<i<<" "<<edx<<endl;
                st=i;
                ed=edx;
            }
            
            if((ed-st)>s.length()-i)
                break;
            
            
        }
        cout<<st<<" "<<ed<<endl;
        if(ed==(s.length()-1))
        return (s.substr(st));    
        return (s.substr(st,ed+1-st));
        
    }


int main()
{
    cout<<longestPalindrome("babad")<<endl<<"___________________"<<endl;
    cout<<longestPalindrome("cbbd")<<endl<<"___________________"<<endl;
    return 0;
}