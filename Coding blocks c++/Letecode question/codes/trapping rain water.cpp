class Solution {
    
    
   
public:
    int trap(vector<int>& height) {
        
        
        int min=0;
        int u=0;
        int tot=0;
        for(int i=1;i<height.size();i++)
        {
            if(height[i]>=height[min])
            {
                tot+=u;
                min=i;
                u=0;
            }[]
            else
            {
                u+=height[min]-height[i];
            }
            
        }
        
        int max=height.size()-1;
        u=0;
        
       for(int i=height.size()-2;i>=min;i--)
        {
           if(height[i]>=height[max])
            {
                tot+=u;
                max=i;
                u=0;
            }
            else
            {
                u+=height[max]-height[i];
            }
            
           
       }
        
        return (tot);
        
    }
};