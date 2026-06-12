class Solution {
public:
 unordered_map<string, vector<string>> memo;
    vector<string> dfs(string s,unordered_set<string>&dict){
        
         if (memo.count(s))
            return memo[s];

            vector<string> ans;

        if (s.empty()) {
            ans.push_back("");
            return ans;
        }

         for (int i = 1; i <= s.size(); i++) {
            
            string prefix = s.substr(0, i);

            if (dict.count(prefix)) {
                
                string suffix = s.substr(i);

                vector<string> temp = dfs(suffix, dict);

                for (string &str : temp) {
                    
                    if (str.empty())
                        ans.push_back(prefix);
                    else
                        ans.push_back(prefix + " " + str);
                }
            }
        }

        return memo[s] = ans;
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>dict(wordDict.begin(),wordDict.end());
        return dfs(s,dict);
    }
};