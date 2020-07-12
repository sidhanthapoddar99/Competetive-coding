class Solution {
public:
    
    bool anagram(string s1,string s2)
    {
        
        if(s1.length()!=s2.length())
             return false;
        
        vector<int> arr(26,0);
        
        for(char s: s1)
         arr[s-'a']++;
        
        for(char s: s2)
         if(!arr[s-'a']>0)
             return false;
         else
             arr[s-'a']--;
        
        return true;
        
         
        
//         int x=0;
//         int su1=0,su2=0;
//         for(int i=0;i<s1.length();i++)
//         {
//             x=x^s1[i]^s2[i];
//             su1+=s1[i];
//             su2+=s2[i];
//         }
        
//         if(x==0&&su1==su2)
//             return true;
//         return false;    
        
    }
    
    
    
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> a;
        
        for(string s:strs)
        {
            int newStr = 1;
            
            for(auto i=a.begin();i!=a.end();i++)
            {
                if( anagram((*i)[0],s))
                {
                    newStr=0;
                    (*i).push_back(s);
                    break;
                }
            }
            
            if(newStr==1)
            {
                a.push_back(vector<string>{s});
            }
            
        }
        
        return a;
    }
};

//////////////////////////////////////////////////////////////////////////////////
// accepted

class Solution {
public:
    
    string to_vec(string s1)
    {
        string s;
        vector<int> arr(26,0);
        for(char c:s1)
        arr[c-'a']++;
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>0)
                s+=to_string((char)('a'+i))+to_string(arr[i]);
        }
        
        return s;
     
    }
    
    
    
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> a;
        unordered_map <string,vector<string>> m;
        
        for(string s:strs)
        {
        
            string vec=to_vec(s);
            
            if(m.find(vec)==m.end())
            {
                m[vec]= vector<string> {s};
            }
            else
                m[vec].push_back(s);
            
        }
        
        int i=0;
        
        for(auto it=m.begin();it!=m.end();it++)
        {
            a.push_back(vector<string> {});
            
            for(string s: it->second)
            a[i].push_back(s);
            
            i++;           
            
        }
        
        
        
        return a;
    }
};