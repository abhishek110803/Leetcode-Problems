class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        
        sort(nums.begin(),nums.end());
        
        if ( nums.size()==1){
            if(nums[0]<=0){return 1;}
             if(nums[0]==1){return 2;}           
            if(nums[0]>1){return 1;}

        }
        
        for(int i=1;i<nums.size();i++){
            
        
            
            if (nums[i]<0&&nums[i-1]<=0){
                if(i==nums.size()-1){return 1;}
                
                continue;}
            
            
            if (nums[i]>=0&&nums[i-1]<=0){
                if (nums[i]>1){return 1;}
                
                if (nums[i]==1){
                    if (i==nums.size()-1){ return nums[i]+1;}
                    continue;}
                if (nums[i]==0){
                    if (i==nums.size()-1){ return nums[i]+1;}
                    continue;}
                
                
              
                
                }
            if (nums[i]>0&&nums[i-1]>0){
                if (i-1==0&&nums[0]>1){ return 1;}
                
                if(nums[i]==nums[i-1]||nums[i]==nums[i-1]+1){
                    
                    
                    if (i==nums.size()-1){ return nums[i]+1;}
                    
                    continue;}
                
                 else {return nums[i-1]+1; }
                }
            
            
            
            
            
        }
        
    return -1;}
};