class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>first;
        vector<int>second;

        first.push_back(nums[0]);
        second.push_back(nums[1]);

        for(int i=2;i<nums.size();i++){
            if(first[first.size()-1]>second[second.size()-1]){
                first.push_back(nums[i]);
            }
            else{
                second.push_back(nums[i]);
            }
        }

        first.insert(first.end(), second.begin(), second.end());
        return first;
    }
};