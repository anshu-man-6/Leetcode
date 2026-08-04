class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       
        sort(nums.begin(),nums.end());
        int highest=nums[nums.size()-1];
        int st=nums[0];
        vector<int>cal(highest+1,0);
        vector<int>ans;
        for(int i:nums){
            cal[i]+=1;
        }
         for(int i=st;i<cal.size()-1;i++){
            if(cal[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};