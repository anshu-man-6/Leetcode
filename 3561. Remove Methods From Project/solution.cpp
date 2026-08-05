class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        
       // making adjacency list
        vector<vector<int>> adj(n);
        for (const auto& inv : invocations) {
            adj[inv[0]].push_back(inv[1]);
        }
        
        // perform bfs to retrive all suspecious node
        vector<bool>sus(n,false);
        queue<int>q;
        q.push(k);
        sus[k]=true;
        while(q.size()>0){
           int temp=q.front();
           q.pop();
           for(int i:adj[temp]){
             if(sus[i]==false){
                sus[i]=true;
                q.push(i);
             }
           }
        }
 
       // check for if any non-suspecious node call suspecious

        for(auto it:invocations){
            int u=it[0];
            int v=it[1];
            if(!sus[u] && sus[v]){
                vector<int>ans;
                for(int i=0;i<n;i++){
                    ans.push_back(i);
                }
                return ans;
            }
        }
      
      // return all non-suspecious nodes
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (!sus[i]) {
                ans.push_back(i);
            }
        }
        return ans;



    }
};