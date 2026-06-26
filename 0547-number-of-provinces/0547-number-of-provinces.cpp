class Solution {
public:

    void dfs(int u, vector<vector<int>>& isConnected, vector<int>&visited){
        visited[u]=1;

        for(int v=0;v<isConnected.size();v++){
            if(!visited[v] && isConnected[u][v] == 1){
                dfs(v,isConnected, visited);
            }
        }

    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>visited(n,0);
        int province=0;

        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(i,isConnected,visited);
                province++;
            }
        }
        return province;
    }
};


    // void dfs(unordered_map<int, vector<int>>& adj, int u, vector<bool>& visited) {
    //     visited[u] = true;

    //     // Visit all neighbours
    //     for(int &v : adj[u]) {
    //         if(!visited[v]) {
    //             dfs(adj, v, visited);
    //         }
    //     }
    // }

    // int findCircleNum(vector<vector<int>>& isConnected) {
    //     int n = isConnected.size();

    //     // Create adjacency list from adjacency matrix
    //     unordered_map<int, vector<int>> adj;

    //     for(int i = 0; i < n; i++) {
    //         for(int j = 0; j < n; j++) {
    //             if(isConnected[i][j] == 1) {
    //                 adj[i].push_back(j);
    //                 adj[j].push_back(i);
    //             }
    //         }
    //     }

    //     vector<bool> visited(n, false);
    //     int count = 0;

    //     // Count connected components (provinces)
    //     for(int i = 0; i < n; i++) {
    //         if(!visited[i]) {
    //             count++;
    //             dfs(adj, i, visited);
    //         }
    //     }

    //     return count;
