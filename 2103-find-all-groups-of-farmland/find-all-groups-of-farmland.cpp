class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int rows = land.size();
        int cols = land[0].size();
        vector<vector<int>> result;
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (land[r][c] == 1 && ((r == 0 || land[r - 1][c] == 0) && (c == 0 || land[r][c - 1] == 0))) {
                    int r2 = r;
                    while (r2 < rows - 1 && land[r2 + 1][c] == 1) {
                        ++r2;
                    }
                int c2 = c;
                while (c2 < cols - 1 && land[r][c2 + 1] == 1) {
                    ++c2;
                }
                result.push_back({r, c, r2, c2});
            }
        }
    }

    return result;

        
    }
};