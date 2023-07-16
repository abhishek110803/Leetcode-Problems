class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                v.push_back(i);
                
            }
        }
        
        vector<int>p;
        if(v.size()!=0){
        p.push_back(v[0]);
         p.push_back(v[v.size()-1]);
        }
        else{p.push_back(-1);
         p.push_back(-1);}
        
   return p; }
};