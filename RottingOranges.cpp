class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        int countFresh =0;

        queue<pair< pair<int, int>, int>> q;
        // {{row,col},time}

        for(int i =0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 2){
                    q.push({{i,j},0});
                }
                else if(grid[i][j] == 1)
                    countFresh++;
            }
        }
        
        int tm =0;
        int drow[] = {-1,0,+1,0};
        int dcol[] = {0,+1,0,-1};
        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int t = q.front().second;
            tm = max(tm,t);
            q.pop();

            // Visit all the Neighbouring Guys
            for(int i =0; i<4; i++){
                int nrow = row + drow[i];
                int ncol = col + dcol[i];

                // Check if index is valid or not
                if(nrow >=0 && nrow < n && ncol >=0 && ncol<m && grid[nrow][ncol] != 2 && grid[nrow][ncol] == 1){
                    q.push({{nrow,ncol},t+1});
                    grid[nrow][ncol] = 2;
                    countFresh--;

                }
            }
        }
        if(countFresh > 0) return -1;
        else return tm;
    }
};