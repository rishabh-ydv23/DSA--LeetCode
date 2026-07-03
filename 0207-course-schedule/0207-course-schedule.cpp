class Solution {
public:

    bool dfs(int u,vector<bool>&visited,vector<bool>&inRecursion, vector<vector<int>>&adj){
        visited[u]=true;
        inRecursion[u]=true;

        for(int neighbour:adj[u]){
            if(!visited[neighbour]){
                if(dfs(neighbour, visited, inRecursion, adj)){
                    return true;
                }
            }else if(inRecursion[neighbour]){
                return true;
            }
        }
        inRecursion[u]=false;
        return false;
    }


    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n=numCourses;
        vector<vector<int>>adj(n);
        vector<bool>visited(n,0);
        vector<bool>inRecursion(n,0);

        for(auto& edge:prerequisites){
            int u=edge[0];
            int v=edge[1];
            adj[u].push_back(v);
        }

        for(int i=0;i<n;i++){
            if(!visited[i]){
                if(dfs(i, visited, inRecursion, adj)){
                    return false;
                }
            }
        }
        return true;
    }
};