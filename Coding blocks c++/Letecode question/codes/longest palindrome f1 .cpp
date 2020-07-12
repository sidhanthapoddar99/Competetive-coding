#include<unordered_map>
#include<list>
#include <vector>
using namespace std;

class Solution {
public:
    
    unordered_map<int,int> dpp;
    
    unordered_map<char,list<int>> m;
    
    int mxs;//max size found
    int mxi;//max index

    
    bool palindrome(int st,int ed, string &s,char c)
    {
        for(;st<=ed;st++,ed--)
            
            if(s[st]!=s[ed])
                return false;
          //  else if(c!=s[st])
           // if(dpp.find(st)!=dpp.end() && dpp[st]==ed )
           //     return true;
             
                
        return true;
        
        
    }
    
    void palin(string &s,char c,list<int>:: iterator st,list<int>:: iterator edf)
    {
        //auto st=m[c].begin();
       // auto edf=m[c].end();
        
        edf--;
        auto ed=edf;
        for(;st!=edf&& ((*edf-*st)>mxs);st++)
        {
            
            //auto ed=m[c].end(); //change to edf
            ed=edf;
            //ed--;
            for(;ed!=st&& ((*ed-*st)>mxs);ed--)
            {
              if(palindrome(*st,*ed,s,c))
              {
                  //dpp[*st]=*ed;
                  mxs=*ed-*st;
                  mxi=*st;
              }
            }
        }
        
        
    }
    
    
    string longestPalindrome(string s) {
        
        
        for(int i=0;i<s.length();i++)
        {
            if(m.find(s[i])==m.end())
                m[s[i]].push_back(i);
            else
                m[s[i]].push_back(i);
        }
        
        for(auto i=m.begin();i!=m.end();i++)
        {
            palin(s,i->first,i->second.begin(),i->second.end());         
        }
        
        return s.substr(mxi,mxs+1);
        
        
    }
};

// with DP

#include<unordered_map>
#include<list>

class Solution {
public:
    
   // vector<int> dpp;
    
    unordered_map<char,vector<int>> m;
    
    int mxs;//max size found
    int mxi;//max index

    
    bool palindrome(int st,int ed, string &s,char c)
    {
        for(;st<=ed;st++,ed--)
            
            if(s[st]!=s[ed])
                return false;
           // else if(c!=s[st])
            //if(dpp[st]==ed )
            //    return true;
             
                
        return true;
        
        
    }
    
    void palin(string &s,char c,vector<int>:: iterator st,vector<int>:: iterator edf)
    {
       
        edf--;
        auto ed=edf;
        for(;st!=edf&& ((*edf-*st)>mxs);st++)
        {
            ed=edf;
            for(;ed!=st&& ((*ed-*st)>mxs);ed--)
            {
              if(palindrome(*st,*ed,s,c))
              {
                 // dpp[*st]=*ed;
                  mxs=*ed-*st;
                  mxi=*st;
              }
            }
        }
        
        
    }
    
    
    string longestPalindrome(string s) {
        
        //dpp.insert(dpp.begin(),s.length(),-1);
        for(int i=0;i<s.length();i++)
        {
            m[s[i]].push_back(i);
        }
        
        for(auto i=m.begin();i!=m.end();i++)
        {
            palin(s,i->first,i->second.begin(),i->second.end());         
        }
        
        return s.substr(mxi,mxs+1);
        
        
    }
};