class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num==1||num==4||num==9||num==16){return true;}
        for(double i=0;i<=num/4;i++){
            if (num==i*i){return true;}
            
        }
  
    return false;}
};