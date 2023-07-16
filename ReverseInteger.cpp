class Solution {
public:
    int reverse(int x) {
        
        int p=x;
        cout<<p;
        vector<int>v;
        while(x!=0){int l;
                    l=x%10;
                    v.push_back(l);
                        x=x/10;
            
        }
        
        double sum =0;
        for(int i=0;i<v.size();i++){sum=sum+v[i]*pow(10,v.size()-i-1);}
            
        
        if(sum>=(pow(2,31)-1)||sum<=(-pow(2,31))){return 0;
            
        }
    
        
   return sum; }
};