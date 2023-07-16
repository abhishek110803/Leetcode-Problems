class Solution
{
public:
    unordered_map<int, list<int>> adj;

    void addedge(int u, int v)
    {
        adj[u].push_back(v);
    }

    void printlist()
    {
        for (auto i : adj)
        {
            cout << i.first << "->";
            for (auto nbr : i.second)
            {
                cout << nbr << ",";
            }
            cout << endl;
        }
    }

    void bfs_traversal(unordered_map<int, bool> &visited, int node)
    {
        visited[node] = true;
        queue<int> q;
        q.push(node);
        while (!q.empty())
        {
            int front = q.front();
            q.pop();
            cout << front << " ";
            for (auto nbr : adj[front])
            {
                if (!visited[nbr])
                {
                    q.push(nbr);
                    visited[nbr] = true;
                }
            }
        }
    }

    bool canVisitAllRooms(vector<vector<int>> &rooms)
    {

        for (int i = 0; i < rooms.size(); i++)
        { // cout << i << "->";
            for (int j = 0; j < rooms[i].size(); j++)
            {
               // cout << rooms[i][j] << ",";
               addedge(i,rooms[i][j]);
                
            }
        }

      printlist();
   unordered_map<int, bool> visited;
    
    
            bfs_traversal(visited, 0);
    
    
  if(visited.size()==rooms.size()){ return true;}
       

        return false;
    }
};