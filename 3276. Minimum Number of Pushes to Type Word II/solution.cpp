class Solution {
public:
    int minimumPushes(string word) {
        int ans=0;
        int mul=1;
        int curr=1;
        int n=word.size();

        vector<int>vec(26,0);
        for(char c:word){
            vec[c-'a']++;
        }
        sort(vec.begin(),vec.end());

        for(int i=25;i>=0;i--){
            if(vec[i]!=0){
                if(curr<=8){
                    ans=ans+(vec[i]*mul);
                    curr++;
                }
                else{
                    mul++;
                    curr=2;
                    ans=ans+(vec[i]*mul);
                }
            }
        }

        return ans;

    }
};