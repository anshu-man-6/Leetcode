class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end(),greater<int>());
        int cnt=0;
        int ans=0;

        for(int i:cost){
            if(cnt>=2){
                cnt=0;
                continue;
            }
            else{
                ans+=i;
                cnt++;
            }
        }

        return ans;
    }
};