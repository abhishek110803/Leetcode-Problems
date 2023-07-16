class Solution {
public:
    bool isPalindrome(int x) 
    {if(x<0){return false;}
        vector<int> v;
     while(x!=0)
     {int l;
      l=x%10;
      v.push_back(l);
      x=x/10;
         
     }
     int count=0;
     
     for(int i=0 ;i<v.size()/2;i++){
         
         if (v[i]==v[v.size()-1-i]){count++;}
     }
         if(count==(v.size()/2)){return true;}
     
       else
       {
       return false; }
    }
};