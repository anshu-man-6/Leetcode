class Solution {
public:
    struct cmp{
        bool operator()(vector<int>&p1,vector<int>&p2){
            if(p1[0]==p2[0]){
                return p1[1]>p2[1];
            }
            return p1[0]<p2[0];
        }

    };
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp());
    
        int ans=0;
        int max_end=0;
        for(int i=0;i<intervals.size();i++){
            if(intervals[i][1]>max_end){
                max_end=intervals[i][1];
                ans++;
            }
           
        }
        return ans;
    }
};