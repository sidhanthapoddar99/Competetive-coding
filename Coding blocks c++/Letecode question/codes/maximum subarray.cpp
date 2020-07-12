class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        long int max=-99999999999999;
        int m=0;
        //vector<int>& n;
        
        for(int i=0;i<nums.size();i++)
        {
            if(m<0 && nums[i]>=0)
            {
                m=0;
            }
            
            if(m+nums[i]>0)
              m=m+nums[i];
            else
                m=nums[i];
            if(max<m)
                max=m;
            
        }
        
        return max;        
        
    }
};