class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        
       long long int small=INT_MAX;
        long long int big=INT_MIN;
        for(long long int i:nums){
            small=min(small,i);
            big=max(big,i);

        }

        long long int diff=big-small;
        return k*diff;
        
    }
};