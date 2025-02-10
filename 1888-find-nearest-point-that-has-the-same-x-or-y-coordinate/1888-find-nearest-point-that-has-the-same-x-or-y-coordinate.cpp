class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int dist = 100000000, ind = 100000;
        for (int i = 0; i < points.size(); i++) {
            int temp = abs(points[i][0] - x) + abs(points[i][1] - y);
            if ((points[i][0] == x || points[i][1] == y) && dist > temp) {
                ind = i;
                dist = min(dist, temp);
            }
        }
        if (ind == 100000) return -1;
        return ind;
    }
};