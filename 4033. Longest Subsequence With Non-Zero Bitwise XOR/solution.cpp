class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int ans=nums[0];
        int cnt= nums[0]==0?1:0;

        for(int i=1;i<nums.size();i++){
            if(nums[i]==0){
                cnt++;
            }
            ans=ans^nums[i];

        }
        if(ans!=0){
            return nums.size();
        }
        if(cnt==nums.size()){
            return 0;
        }
       return nums.size()-1;
    }
};