class Solution {
public:
    bool solve (int n,vector<int>ans)
    { ans.push_back(n);
       if ( n==1){ return true;}
        for(int i=0;i<ans.size()-1;i++)
        {
            if(ans[i]==ans[ans.size()-1])
            {
                return false;
            }
        }
        
        vector <int> v;
       
        
            
            while ( n!=0){
                int l;
                l=n%10;
                    v.push_back(l);
                n=n/10;
                
            }
        
                int sum=0;
                      for ( int k=0;k<v.size();k++){
                          sum=sum+(v[k]*v[k]);
                      }
                      
                      
                          int l =solve(sum,ans);
        
        return l;
        
                      
      return false;   
    }
    bool isHappy(int n) { int count=0;
                         vector<int>ans;
       return solve(n,ans);
          }
        
    
        
        
    
};