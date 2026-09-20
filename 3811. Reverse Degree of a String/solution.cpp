class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;

        for(int i=0;i<s.size();i++){
            int idx=('z'-s[i])+1;
            int curridx=i+1;
            ans+=idx*curridx;

        }

        return ans;
        
    }
};