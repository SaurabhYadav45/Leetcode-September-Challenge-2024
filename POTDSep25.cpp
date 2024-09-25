class Solution {
public:
     void dfs(unordered_map<int, vector<int>>&adjList, unordered_map<int, bool>&visited, int src){
        visited[src] = true;
        for(auto& nbr : adjList[src]){
            if(!visited[nbr]){
                dfs(adjList, visited, nbr);
            }
        }
     }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        unordered_map<int, vector<int>>adjList;
        unordered_map<int, bool>visited;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(isConnected[i][j] == 1){
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }

        int count = 0;
        for(int i=0; i<n; i++){
            if(!visited[i]){
                dfs(adjList, visited, i);
                count++;
            }
        }
        return count;
    }
};
