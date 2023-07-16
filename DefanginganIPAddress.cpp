class Solution {
public:
    string defangIPaddr(string address) {
        string v;
        for( int i=0;i<address.length();i++){
            if ( address[i]=='.'){v.push_back('[');
                                  v.push_back('.');
                                  v.push_back(']');}
                else{v.push_back(address[i]);}
                
            
        }
        //reverse(v.begin(),v.end());
        
   return v; }
};