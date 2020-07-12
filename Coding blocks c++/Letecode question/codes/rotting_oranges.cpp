#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class Solution {
public:
    
      int arr[4][2]={{-1,0},{0,-1},{0,1},{1,0}};
    int dim[2];
    int tot=0;
    int max=2;
    
    void rot(queue<int> &qu, vector<vector<int>>& grid)
    {
        if(!qu.empty())
        {
        tot++;
        int x = (int) qu.front()/dim[1];
        int y=  qu.front()%dim[1];
        
            if(max<grid[x][y])
                max=grid[x][y];
            
        
        
        for(int k=0;k<4;k++)
        {
            int i = arr[k][0];
            int j = arr[k][1];
            
            if((x+i)>=0 && (y+j)>=0 && (x+i)<dim[0] && (y+j)<dim[1])
            {
                if(grid[x+i][y+j]==1)
                {
                    qu.push(((x+i)*dim[1]+(y+j)));
                    grid[x+i][y+j]=grid[x][y]+1;
                }
            }
        }
            qu.pop();
            rot(qu,grid);
            
            
        }
    
    }
    
    
    int orangesRotting(vector<vector<int>>& grid) {
        
        int t=0;
        
        dim[0]=grid.size();
        dim[1]=grid[0].size();
        
        queue<int> qu;
            for(int i=0;i<dim[0];i++)
            {
                for(int j=0;j<dim[1];j++)
                {
                 
                    if(grid[i][j]==2)
                        {
                           qu.push((i*dim[1]+j));
                           t++; 
                        }
                    else if(grid[i][j]==1)
                    {
                        t++;
                    }
                }
                    
            }
        
        rot(qu, grid);
        if(t!=tot)
            return -1;
        return (max-2);
        
    }
};

int main()
{
    vector<vector<int>> grid({{1,1},{2,1},{1,1}});

    Solution *r=new Solution();
    cout<<r->orangesRotting(grid);

    return 1;
}