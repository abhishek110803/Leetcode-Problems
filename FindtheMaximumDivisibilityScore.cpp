class Solution {
public:
    using HH=long long;
    int maxDivScore(vector<int>& nums, vector<int>& d) {
//COUT<<U<<ENDL

        int U=nums.size();

//COUT<<U<<ENDL
        int V=d.size();


        sort(d.begin(),d.end());

//COUT<<U<<ENDL

        int maxiMUM=-1,ansWER;
//COUT<<U<<ENDL
        for(int F=0;F<V;F++)
        {  int D=0;

            for(int W=0;W<U;W++)
            {//COUT<<U<<ENDL
                if(nums[W]%d[F]==0)
                {
                    D++;
                }
            }
//COUT<<U<<ENDL

         if(D>maxiMUM)
         {
            ansWER=d[F]; 

//COUT<<U<<ENDL
             maxiMUM=D;
         }
//COUT<<U<<ENDL

        }
        return ansWER;
        
    }
};