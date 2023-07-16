class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {

        int p=edges[0][0];int q=edges[0][1];
        if( p==edges[1][0] || p==edges[1][1]){
            return p;
        }

       else if( q==edges[1][0] || q==edges[1][1]){
            return q;
        }

        return 0;
    }
};