class Solution {
public:
    using hh= long long;
    vector<long long> findPrefixScore(vector<int>& nums) {
         hh M=nums.size();
        vector<long long>answer(M),a(M);
        
        
         hh maximum=0;
           for(hh k=0;k<M;k++)
           {
              maximum=max(maximum,(hh)nums[k]);
               a[k]=nums[k]+maximum;
               
           }
        answer[0]=a[0];
            for(hh z=1;z<M;z++)
           {
             answer[z]=answer[z-1]+a[z];
           }
        return answer;
        
        
    }
};