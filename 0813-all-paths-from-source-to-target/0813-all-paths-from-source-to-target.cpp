class Solution {
public:
     void dfs(vector<vector<int>>& graph,int u,int t,vector<vector<int>>&result,vector<int>&temp){
        temp.push_back(u);
        if(u==t){
            result.push_back(temp);
        }
        else{
            for(auto it:graph[u]){
                    dfs(graph,it,t,result,temp);
            }
        }
        temp.pop_back();
     }




    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<vector<int>>result;
        vector<int>temp;
         
        int source=0;
        int target=n-1;

        dfs(graph,source,target,result,temp);
        return result;
            }
};