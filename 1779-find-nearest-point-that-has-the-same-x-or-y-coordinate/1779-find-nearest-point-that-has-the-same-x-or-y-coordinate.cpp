class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int min = INT_MAX , idx = -1;
    for(int i = 0; i < points.size(); i++){
        if(points[i][0] == x || points[i][1] == y){
            int manhattanDist = abs(x - points[i][0] ) +  abs(y - points[i][1]);
            if(manhattanDist < min){
                idx = i;
                min = manhattanDist;
            }
        }
    }
    return idx;
    }
};