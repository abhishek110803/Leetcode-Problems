class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int count=1;
        if (n==1){
            return nums[0];
      }
  else
  { 
  for(int j=0;j<n;j++){if(nums[j]==nums[j+1]){count++;}
                         if((nums[j]!=nums[j+1] && count>n/2) 
                            || j+1==n-1 )
                         {return nums[j];}
                          if(nums[j]!=nums[j+1] && count<n/2){count=1;}
                         
        
    }
    }
        
    
        
   return -1; }
};