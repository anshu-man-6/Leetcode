class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<bool>ans;
        vector<int>cmp(n,0);
        int temp=0;
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]>maxDiff){
                temp++;
            }
            cmp[i]=temp;
        }


        for(auto i:queries){
           
                ans.push_back(cmp[i[0]]==cmp[i[1]]);
            
        }
        return ans;
    }
};