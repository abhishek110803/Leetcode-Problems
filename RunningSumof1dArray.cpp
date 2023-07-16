class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        vector<int>kk;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            kk.push_back(sum);
        }
        return kk;
    }
};