// https://leetcode.com/problems/two-sum/solution/

// my first solution using hash maps 
// but used 2 passes + one thing to note checking for indices in the if statement 
//the new index is stored instead of the old one 
// we check if the indices are matching eg in case of 
// {3,3} 6
// same number if just used find varibale
// (3,4,2) 6 // would give {0,0} if not used the check statement
// test result  faster than 50% submissions
// less space than 15% solution
// net try with LOOK BACK

#include <map>
using namespace std;
class Solution {
    
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> x;
        
        for(int i=0;i<nums.size();i++)
        {
            x[nums[i]]=i;
        }
        
        for(int i=0;i<nums.size();i++)
        {
        
            if(x.find(target-nums[i])!=x.end() && i!=x[target -nums[i]])
                return (vector<int> {i,x[target-nums[i]]});
        }
        
        return (vector<int> {0,0});
    }
};


// implementation with look back
// speed better than 45%
// space better than 50%
#include <map>
using namespace std;
class Solution {
    
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> x;
        
        for(int i=0;i<nums.size();i++)
        {
            if(x.find(target-nums[i])!=x.end())
               return (vector<int> {x[target-nums[i]],i});
            
            x[nums[i]]=i;
        }
    
        
        return (vector<int> {0,0});
    }
};

// using unordered map instead of maps
// speed better than 80%
// memory better than 15%

#include <unordered_map>
using namespace std;
class Solution {
    
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> x;
        
        for(int i=0;i<nums.size();i++)
        {
            if(x.find(target-nums[i])!=x.end())
               return (vector<int> {x[target-nums[i]],i});
            
            x[nums[i]]=i;
        }
    
        
        return (vector<int> {0,0});
    }
};