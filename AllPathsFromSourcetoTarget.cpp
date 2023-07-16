class Solution {
public:
  vector<int> u;
  vector<vector<int>> k;

   
     void dfs_traversal( int i,vector<vector<int>>& graph)
    {

        cout << i << " ";
        u.push_back(i);

        
        for (int j=0;j<graph[i].size();j++ )
        {
             // cout<<graph[i][j]];
            
                dfs_traversal( graph[i][j],graph);
            
        }
         
         if( i==graph.size()-1) {k.push_back(u);}
         u.pop_back();

    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {

        dfs_traversal( 0,graph);

        for( int i;i<k.size();i++){

              for( int j;j<k[i].size();j++){
                  cout<<k[i][j]<<",";

            
        }

        cout<<endl;
        }


     return k;

        
    }
};