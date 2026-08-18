class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
       int n = nums.size();
        unordered_map<int, int> freq;
        for (int x : nums) {
            freq[x]++;
        }

        if(k==1){
            int ans=-1;
            for(auto &i:freq){
                if(i.second==1){
                 ans=max(ans,i.first);
                }
            }
            return ans;
        }

        else if(k==n){
            int ans=-1;
            for(int i:nums){
                ans=max(ans,i);
                
            }
            return ans;
        }

        else{
            int ans=-1;
            if(freq[nums[0]]==1){
                ans=max(ans,nums[0]);
            }
            if(freq[nums[n-1]]==1){
                ans=max(ans,nums[n-1]);
            }

            return ans;

        }   

        return 0; 
    }
};