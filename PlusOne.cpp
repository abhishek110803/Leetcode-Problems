class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         vector<int> v;
        int sum=0;
        int carry=1;
        for(int i=0;i<digits.size();i++){
            sum=digits[digits.size()-1-i]+carry;
             if ((digits.size()-1-i)==0 && sum==10){int l;
                         l=sum%10;
                         v.push_back(l);
                         v.push_back(1);
                                                   break;}
            if (sum==10){int l;
                         l=sum%10;
                         v.push_back(l);
                         carry=1;}
            else {
                v.push_back(sum);
                carry=0;
            }
                
            }
        
 
         reverse(v.begin(), v.end());
        return v;
        
    }
};