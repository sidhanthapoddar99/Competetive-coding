#include <iostream>
#include <string>
#include<vector>
#include<string>


using namespace std;

class Screen
{
    public:
 	string name;
  	vector<vector<int>> s; //seats
	vector<int> il; // il seats for each row
    
    public:
  
  	Screen(string &nm, int r, int c, vector<int> &ils  )
    {
      
      name = nm;
      s.resize(r);
      
      for(int i=0;i<r;i++)
        s[i].resize(c);      
      il.resize(ils.size());
      
      for(int i=0;i<ils.size();i++)
      il[i]=ils[i]-1;
      
    }
  
  bool check_il(int c)
  {

      for(auto i=il.begin();i!=il.end();i++)
      {
          if(*i==c)
          return true;

      }
      return false;
  }
  
  int rec(int r,int c,int n,int inc)// row no, col no, no of seats left, incrementor 
  {
    
    if(n==0 || c<0 || c>=s[r].size())
      return 0;
    else if(s[r][c]==1)
      return 0;
    else if(check_il(c));
    	return 1;
    c+=inc;
    n--;
    return( rec(r,c,n,inc)+1);
  }
  
  void suggest(int r,int c,int n)
  {
    	vector<int> seats;
    
    if(s[r][c]==1)
     cout<<"none"; 

    else{
		int right=rec(r, c-1, n,-1);
        int left=rec(r, c+1, n,1);
    	int st,ed;
        cout<<left<<"  "<<right;
    	if(left+right<n-1)
        cout<<"none";
    	
        else{
            if(right< ((int)n/2))
                {
                    st=right;
                    ed=n-right;
                    }
            else
            {
                ed=left;
                st=left-n;
            }
    
    cout<<st<<ed;
    //seats.push_back(st);
    //seats.push_back(ed);
        }
    }
	    
  }
  	
  
};

int main()
{

    string s="Screen1";
    vector<int>v{4,5,8,9};

    Screen s1(s,12,10,v);

    //s1.suggest(4,3,4);
    cout<<s1.check_il(3);
    //cout<<s1.name<<endl<<endl;
    //cout<<endl<<c[0]<<c[1];
    return (1);


}