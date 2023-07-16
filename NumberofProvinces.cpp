class Solution {
public:



  void bfs_traversal(unordered_map<int, bool> &visited, int node,vector<vector<int>>& isConnected)
    {
        visited[node] = true;
        queue<int> q;
        q.push(node);
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            cout << node << " ";
            for (int j=0;j<isConnected[node].size();j++)
            {   
                
                 if(isConnected[node][j]==1){
                if (!visited[j])
                {
                    q.push(j);
                    visited[node] = true;
                }}
            }
        }
    }


    int findCircleNum(vector<vector<int>>& isConnected) {


            unordered_map<int, bool> visited;

            int count=0;
    
    for (int i = 0; i < isConnected.size(); i++)
    {
        if (!visited[i])
        { count++;
          cout<<endl<<"count"<<count<<"node"<<i<<endl;
            bfs_traversal(visited, i,isConnected);
            
        }

        
    }
           return count;

        
    }



};