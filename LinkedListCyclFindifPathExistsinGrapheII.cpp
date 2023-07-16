class Solution {
public:
int count=0;

    unordered_map<int,list<int>> adj;
    unordered_map<int,bool> visited;
    void addedge(int u ,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
    }
    void printlist(){
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto nbr:i.second){
                cout<<nbr<<",";
            }
            cout<<endl;
        }
    }
    void dfs_traversal(unordered_map<int,bool> &visited,int node,int destination){
        visited[node] = true;
        if(node == destination){ count=1;
        return;}
        cout<<node<<" ";
        for (auto nbr:adj[node])
        {
            if(!visited[nbr]){
                dfs_traversal(visited,nbr,destination);
            }
        }
        
    }




    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {

        int u=edges.size();
        for(int i=0;i<u;i++){

             addedge(edges[i][0] ,edges[i][1]);

        }
          

          
          dfs_traversal(visited,source,destination);
 if (count==1){   return true;}
return false;
        
    }
};