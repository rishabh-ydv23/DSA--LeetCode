class Solution {
public:
    bool hasCycle=false;

    void dfs(int u,vector<vector<int>>&adj,vector<bool>&visited,vector<bool>&inRecursion,stack<int>&st){
        visited[u]=1;
        inRecursion[u]=1;

        for(int &v:adj[u]){
            if(inRecursion[v]==true){
                hasCycle=true;
                return;
            }else if(!visited[v]){
                dfs(v,adj,visited,inRecursion,st);
            }
        }
        st.push(u);
        inRecursion[u]=0;
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        vector<bool>visited(numCourses,0);
        vector<bool>inRecursion(numCourses,0);
        stack<int>st;
        vector<int>res;

        for(auto &edge:prerequisites){
            int a=edge[0];
            int b=edge[1];
            adj[b].push_back(a);
        }

        for(int i=0;i<numCourses;i++){
            if(!visited[i]){
                dfs(i,adj,visited,inRecursion,st);
            }
        }

        if(hasCycle==true){
            return {};
        }

        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        return res;
    }
};