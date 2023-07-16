class Solution {
public:
    int removeElement(vector<int> &nums, int val) 
    { int n=nums.size();
        for (int i=0;i<n;i++)
            
      {
            if(nums[0]!=val)
        {nums.push_back(nums[0]);
          
    }nums.erase(nums.begin());
      }
     
        
        return nums.size();
            
        
        
        
    }
};