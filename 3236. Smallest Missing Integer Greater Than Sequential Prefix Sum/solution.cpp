class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int ans=nums[0];
        
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                ans+=nums[i];
            }
            else{
                break;
            }
        }

       int i=0;
       while(i<nums.size()){
            if(ans==nums[i]){
                ans++;
                i=0;
                continue;
            }
            i++;

        }

        return ans;
        
    }
};