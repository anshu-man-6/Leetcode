class Solution {
public:
    int help(int start,int end,vector<int>& stoneValue,vector<vector<int>>&dp, vector<int>&prefix){
        if(start==end){
            return 0;
        }
         if(dp[start][end]!=-1){
            return dp[start][end];
         }
        int ans=0;
        int  total=prefix[end+1]-prefix[start];

        
        int left=0;
        for(int i=start;i<end;i++){
            left+=stoneValue[i];
            int right=total-left;

            if(left<right){
                ans=max(ans,left+help(start,i,stoneValue,dp,prefix));
            }
            else if(left>right){
                ans=max(ans,right+help(i+1,end,stoneValue,dp,prefix));
            }
            else{
               ans=max(ans,left+help(start,i,stoneValue,dp,prefix));
                ans=max(ans,right+help(i+1,end,stoneValue,dp,prefix));
            }
        }

        return dp[start][end]=ans;

    }

    int stoneGameV(vector<int>& stoneValue) {
        vector<vector<int>>dp(stoneValue.size(),vector<int>(stoneValue.size(), -1));
        vector<int>prefix(stoneValue.size()+1,0);
       
       for (int i = 0; i < stoneValue.size(); i++) {
            prefix[i + 1] = prefix[i] + stoneValue[i];
        }
        return help(0,stoneValue.size()-1,stoneValue,dp,prefix);
        
        
    }
};