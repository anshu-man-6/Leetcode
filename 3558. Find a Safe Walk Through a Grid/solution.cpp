class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int m = grid.size();
        int n = grid[0].size();

        // maxHealth[i][j] stores the maximum health reaching cell (i, j)
        vector<vector<int>> maxHealth(m, vector<int>(n, -1));

        int startHealth = health - grid[0][0];
        if (startHealth < 1) return false;

        deque<pair<int, int>> dq;
        dq.push_back({0, 0});
        maxHealth[0][0] = startHealth;

        int dirs[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        while (!dq.empty()) {
            auto [r, c] = dq.front();
            dq.pop_front();

            int h = maxHealth[r][c];

            // Reached destination with positive health
            if (r == m - 1 && c == n - 1 && h >= 1) {
                return true;
            }

            for (auto& d : dirs) {
                int nr = r + d[0];
                int nc = c + d[1];

                if (nr >= 0 && nr < m && nc >= 0 && nc < n) {
                    int nextHealth = h - grid[nr][nc];

                    // Only visit/update if we found a path with higher remaining health
                    if (nextHealth > maxHealth[nr][nc] && nextHealth >= 1) {
                        maxHealth[nr][nc] = nextHealth;

                        // 0-1 BFS optimization
                        if (grid[nr][nc] == 0) {
                            dq.push_front({nr, nc});
                        } else {
                            dq.push_back({nr, nc});
                        }
                    }
                }
            }
        }

        return maxHealth[m - 1][n - 1] >= 1;
    }
};