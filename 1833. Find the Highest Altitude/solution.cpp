class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=INT_MIN;
        int sum=0;
        for(int i:gain){
          sum+=i;
          ans=max(ans,sum);
        }
        return ans<0?0:ans;
        
    }
};