class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>>adj(n+1);
        for(auto i:roads){
            adj[i[0]].push_back({i[1],i[2]});
            adj[i[1]].push_back({i[0],i[2]});
        }

        int ans=INT_MAX;
        vector<bool>vis(n+1,false);
        queue<int>q;
        q.push(1);
        vis[1]=true;
        while(q.size()>0){
            int node=q.front();
            q.pop();
            for(auto i:adj[node]){
                ans=min(ans,i.second);
                if(!vis[i.first]){
                    vis[i.first]=true;
                    q.push(i.first);
                }
            }

        }     

        return ans;   
    }
};