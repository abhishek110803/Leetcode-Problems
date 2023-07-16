class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n==1){return true;}
        double p=1;
        while(p<n){p=p*3;
                    if (p==n){return true;}
            
        }
        
   return false; }
};