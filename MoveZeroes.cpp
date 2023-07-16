class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int n=nums.size();
        int i,j;
        int count =0;

        for (j=0;j<n;j++){
            if (nums[j]==0){count++;}}

        for (i=0;i<n-count;i++){
            if (nums[i]==0){
                cout<<nums[i];
                nums.erase(nums.begin()+i);
                nums.push_back(0);
                i--;


                 }
        }

        
    }
};