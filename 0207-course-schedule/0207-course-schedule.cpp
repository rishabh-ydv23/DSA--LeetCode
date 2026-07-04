class Solution {
public:
    bool hasCycle=false;

    void dfs(int u,vector<vector<int>>&adj,vector<bool>&visited,vector<bool>&inRecursion){
        if (hasCycle) return;
        visited[u]=1;
        inRecursion[u]=1;

        for(int &v:adj[u]){
            if(inRecursion[v]==true){
                hasCycle=true;
                return;
            }else if(!visited[v]){
                dfs(v,adj,visited,inRecursion);
            }
        }
        inRecursion[u]=0;
    }

     bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        vector<bool>visited(numCourses,0);
        vector<bool>inRecursion(numCourses,0);

        for(auto &edge:prerequisites){
            int a=edge[0];
            int b=edge[1];
            adj[b].push_back(a);
        }

        for(int i=0;i<numCourses;i++){
            if(!visited[i]){
                dfs(i,adj,visited,inRecursion);
            }
        }

        if(hasCycle==true){
            return false;
        }
        return true;
    }
};




// class Solution {
// public:

//     bool isCycle(int u,vector<bool>&visited,vector<bool>&inRecursion, vector<vector<int>>&adj){
//         visited[u]=true;
//         inRecursion[u]=true;

//         for(int neighbour:adj[u]){
//             // agar visited nhi hai hai to check karenge ke cycle hi ke nhi 
//             if(visited[neighbour]==false && isCycle(neighbour, visited, inRecursion, adj)){
//                 // agar isCycle se true aa gya to return true kar denge
//                 return true;
//             }else if(inRecursion[neighbour]){
//                 return true;
//             }
//         }
//         inRecursion[u]=false;
//         return false;
//     }


//     bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
//         int n=numCourses;
//         vector<vector<int>>adj(n);
//         vector<bool>visited(n,0);
//         vector<bool>inRecursion(n,0);

//         for(auto& edge:prerequisites){
//             int u=edge[0];
//             int v=edge[1];
//             adj[u].push_back(v);
//         }

//         for(int i=0;i<n;i++){
//             if(!visited[i] && isCycle(i, visited, inRecursion, adj)){
//                 return false;
//             }
//         }
//         return true;
//     }
// };