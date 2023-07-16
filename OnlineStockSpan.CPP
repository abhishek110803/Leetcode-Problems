class StockSpanner {
public:
    vector<int>v;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int ct = 0;
        v.push_back(price);
        for(int i=v.size()-1;i>=0;i--){
            if(v[i] <= price){
                ct++;
                //cout<<v[i]<<" ";
            }
            else{
                break;
            }
        }
        //cout<<endl;
        return ct;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */