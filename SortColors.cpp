class Solution {
public:
    void sortColors(vector<int>& nums) {

        int p=0;
           int r=1;
        int q=nums.size()-1;
     
           
        
        while(r<=q ){

            if(nums[r]==0){

                swap(nums[r],nums[p]);
                p++;
            }

            
            if(nums[r]==2){

                swap(nums[r],nums[q]);
                q--;
            }

            if(nums[r]==1){

                if( nums[p]==2)
                {
                   swap(nums[r],nums[p]);
                }

                else

                 { r++;
                continue;}
            }

            if(p==r)
               r++;

        }


        
        
    }
};