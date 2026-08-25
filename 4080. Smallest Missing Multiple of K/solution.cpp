class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        
        unordered_set<int>s;
        for(int i:nums){
            s.insert(i);
        }
        int i=1;
        while(1){
            if(s.find(k*i)==s.end()){
                return k*i;
            }
            i++;
        }

        return -1;
    }
};