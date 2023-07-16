class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int count=1;
        if (n==1){
            return false;
      }
  else
  { 
  for(int j=0;j<n-1;j++){if(nums[j]==nums[j+1] && j+1==n-1){return true;}
                          if(nums[j]==nums[j+1]){count++;}
                         if((nums[j]!=nums[j+1] && count==2) 
                           )
                         {return true;}
                          if(nums[j]!=nums[j+1] && count!=2){count=1;}
                         
        
    }
    }
        
    
        
   return false; }
};
        
