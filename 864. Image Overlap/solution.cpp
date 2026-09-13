class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        vector<pair<int, int>> nonZero1, nonZero2;
        
        // Step 1: Store coordinates of all 1s in img1 and img2
        for (int r = 0; r < n; ++r) {
            for (int c = 0; c < n; ++c) {
                if (img1[r][c] == 1) nonZero1.push_back({r, c});
                if (img2[r][c] == 1) nonZero2.push_back({r, c});
            }
        }
        
        // Step 2: Map each shift vector (dx, dy) to its count of overlapping 1s
        map<pair<int, int>, int> count;
        int maxOverlap = 0;
        
        for (auto& [r1, c1] : nonZero1) {
            for (auto& [r2, c2] : nonZero2) {
                pair<int, int> vec = {r2 - r1, c2 - c1};
                count[vec]++;
                maxOverlap = max(maxOverlap, count[vec]);
            }
        }
        
        return maxOverlap;
    }
};