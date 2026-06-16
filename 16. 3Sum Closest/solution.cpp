class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans=nums[0]+nums[1]+nums[2];
        int n=nums.size();
        for(int i=0;i<n;i++){
           int j=i+1;
           int k=n-1;
           
           while(j<k){
             int currsum=nums[i]+nums[j]+nums[k];
             if(currsum==target){
                return currsum;
             }
             if(abs(target-currsum)<abs(target-ans)){
                ans=currsum;
             }

             if(currsum<target){
                j++;
             }
             else{
                k--;
             }

            }

        }

        return ans;
        
    }
};