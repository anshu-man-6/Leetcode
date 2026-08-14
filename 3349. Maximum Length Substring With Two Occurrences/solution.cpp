class Solution {
public:
    int maximumLengthSubstring(string s) {
        vector<int> count(26, 0);
        int max_len = 0;
        int i = 0;

        for (int j = 0; j < s.size(); j++) {
            count[s[j] - 'a']++;

           
            while (count[s[j] - 'a'] > 2) {
                count[s[i] - 'a']--;
                i++;
            }

            
            max_len = max(max_len, j - i + 1);
        }

        return max_len;
    }
};