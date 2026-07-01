class Solution {
public:
    int maximumSafenessFactor(vector<vector<int>>& grid) {
        int n = grid.size();

        vector<vector<int>> dist(n, vector<int>(n, INT_MAX));
        queue<pair<int, int>> q;

        // Multi-source BFS from all thieves
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    dist[i][j] = 0;
                    q.push({i, j});
                }
            }
        }

        vector<pair<int, int>> directions = {{1,0},{-1,0},{0,1},{0,-1}};

        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();

            for (auto [dx, dy] : directions) {
                int nx = x + dx;
                int ny = y + dy;

                if (nx >= 0 && ny >= 0 && nx < n && ny < n &&
                    dist[nx][ny] == INT_MAX) {

                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx, ny});
                }
            }
        }

        // Max Heap: {current safeness, x, y}
        priority_queue<vector<int>> pq;
        pq.push({dist[0][0], 0, 0});

        vector<vector<int>> visited(n, vector<int>(n, 0));
        visited[0][0] = 1;

        while (!pq.empty()) {
            auto curr = pq.top();
            pq.pop();

            int safe = curr[0];
            int x = curr[1];
            int y = curr[2];

            if (x == n - 1 && y == n - 1)
                return safe;

            for (auto [dx, dy] : directions) {
                int nx = x + dx;
                int ny = y + dy;

                if (nx >= 0 && ny >= 0 && nx < n && ny < n &&
                    !visited[nx][ny]) {

                    visited[nx][ny] = 1;
                    pq.push({min(safe, dist[nx][ny]), nx, ny});
                }
            }
        }

        return 0;
    }
};