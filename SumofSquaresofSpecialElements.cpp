class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        
        long long sum=0;
      
      int size = nums.size();
        for(int i=1;i<=size;i++){
            
            if(size%i==0){
                sum = sum+(nums[i-1]*nums[i-1]);
            }
        }
        
        return sum;
    }
};