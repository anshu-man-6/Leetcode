class Solution {
public:
    int maxProduct(int n) {
        
        vector<int>vec;
        string s=to_string(n);
        for(char c:s){
            vec.push_back(c-'0');
        }

        sort(vec.begin(),vec.end());
        return vec[vec.size()-1 ]* vec[vec.size()-2];
        
    }
};