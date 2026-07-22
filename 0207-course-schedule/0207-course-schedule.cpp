class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        vector<int>indegree(numCourses,0);

        for(auto &edge:prerequisites){
            int u=edge[0];
            int v=edge[1];
            adj[v].push_back(u);

        }

        for(int i=0;i<numCourses;i++){
            for(int neighbour:adj[i]){
                indegree[neighbour]++;
            }
        }

        queue<int>q;

        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }

        int visited=0;

        while(!q.empty()){
            int node=q.front();
            q.pop();
            visited++;

            for(int neighbour:adj[node]){
                indegree[neighbour]--;

                if(indegree[neighbour]==0){
                    q.push(neighbour);
                }
            }
        }
        return numCourses==visited;
    }
};