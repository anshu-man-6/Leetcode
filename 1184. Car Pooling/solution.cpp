class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {

        vector<int>ans(1001,0);
        for(auto i:trips){
            ans[i[1]]-=i[0];
            ans[i[2]]+=i[0];
        }


        for(int i=0;i<ans.size();i++){
            capacity+=ans[i];
            if(capacity<0){
                return false;
            }
        }


        return true;
        
    }
};