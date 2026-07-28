class Solution {
public:
    string smallestPalindrome(string s) {
        int half=s.size()/2;
        vector<char>ch;
         string ans="";
        for(int i=0;i<half;i++){
            ch.push_back(s[i]);
        }

        

        sort(ch.begin(),ch.end());
        
        for(int i=0;i<ch.size();i++){
            ans+=ch[i];
        }
        if(s.size()%2!=0){
            ans+=s[half];
        }
         for(int i=ch.size()-1;i>=0;i--){
            ans+=ch[i];
        }

        return ans;
    }
};