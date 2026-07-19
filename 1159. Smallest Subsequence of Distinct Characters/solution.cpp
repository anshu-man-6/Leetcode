class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> count(26, 0);
        vector<bool> visited(26, false);

        for (char c : s) {
            count[c - 'a']++;
        }






     string ans = "";
        
        for (char c : s) {
            // Decrement the remaining count for this character
            count[c - 'a']--;
            
            // If already included in our answer, skip it
            if (visited[c - 'a']) {
                continue;
            }
            // Maintain monotonic increasing order if the popped element appears later
            while (!ans.empty() && ans.back() > c && count[ans.back() - 'a'] > 0) {
                visited[ans.back() - 'a'] = false;
                ans.pop_back();
            }
            
            // Add the current character
            ans.push_back(c);
            visited[c - 'a'] = true;

        }

        return ans;






    }
};