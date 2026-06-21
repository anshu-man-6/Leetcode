class Solution {
public:
     set<vector<int>> s;
   void combination(vector<int>& candidates,int idx,int target, vector<vector<int>> &ans, vector<int> &combi){

     if(target==0){
        if(s.find(combi)==s.end()){
            ans.push_back(combi);
            s.insert(combi);
        }
        return;
      }
      for (int i = idx; i < candidates.size(); i++) {
        // If the current element is greater than the remaining target, no point moving forward
        if (candidates[i] > target) break; 
        
        // Skip duplicate combinations
        if (i > idx && candidates[i] == candidates[i - 1]) continue;
        
        combi.push_back(candidates[i]);
        combination( candidates,i + 1, target - candidates[i], ans, combi);
        combi.pop_back(); // Backtrack
    }
      return;
   }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         vector<int> combi;
        vector<vector<int>> ans;

        sort(candidates.begin(),candidates.end());
       combination(candidates,0,target,ans,combi);
       return ans;
        
    }
};