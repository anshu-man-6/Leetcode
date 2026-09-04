class Solution {
public:
   bool is(int idx, const string& part, const string& s) {
        if (idx + part.size() > s.size()) return false;
        for (int j = 0; j < part.size(); j++) {
            if (s[idx + j] != part[j]) return false;
        }
        return true;
    }
    string removeOccurrences(string s, string part) {
        int i=0;
       while(i<s.size()){
         if(s[i]==part[0]&&is(i,part,s)){
            s=s.substr(0,i)+s.substr(i+part.size());
            i=0;
            continue;

         }
         i++;

       }

       return s;
        
    }
};