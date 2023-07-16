class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        
            
            
                             for(int j=0;j<n;j++){if (nums.size()==1){
                                                                     break;}
                                 if (nums[0]==nums[1]){nums.erase(nums.begin());}
                                 else if (nums[0]!=nums[1]){nums.push_back(nums[0]);
                                                           nums.erase(nums.begin());}
                             }
        
        return nums.size();
    }
};