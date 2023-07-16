class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int n=nums.size();
        sort(nums.begin(),nums.end());
        int p;

        for(int i=0;i<n-1;i++){
            if (nums[i]==nums[i+1]){
                p=nums[i];
            }
            

        }

        return p;

        
    }
};class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int n=nums.size();
        sort(nums.begin(),nums.end());
        int p;

        for(int i=0;i<n-1;i++){
            if (nums[i]==nums[i+1]){
                p=nums[i];
            }
            

        }

        return p;

        
    }
};