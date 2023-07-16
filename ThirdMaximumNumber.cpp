class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=1;
        for ( int i=0;i<nums.size()-1;i++){
            if (nums[nums.size()-i-1 ]==nums[nums.size()-i-2 ]){continue;}
             if (nums[nums.size()-i-1 ]!=nums[nums.size()-i-2 ]){count++;
                                                                if (count==3)
                                                                {return nums[nums.size()-i-2 ];}}
            
        }
        if (count==2 || count==1){ return nums[nums.size()-1];}
        
   return nums[nums.size()-1]; }
};