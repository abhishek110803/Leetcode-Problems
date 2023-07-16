class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n==1){return true;}
        double p=1;
        while(p<n){p=p*4;
                    if (p==n){return true;}
            
        }
        
   return false; }
};