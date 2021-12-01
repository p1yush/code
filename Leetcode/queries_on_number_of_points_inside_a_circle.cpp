class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        int count = 0;
        vector<int> arr;
        for(int i =0; i < queries.size(); i++) {
            count = 0;
            for(int j = 0; j < points.size(); j++)
                if((points[j][0] - queries[i][0])*(points[j][0] - queries[i][0]) + (points[j][1] - queries[i][1]) * (points[j][1] - queries[i][1]) - (queries[i][2] * queries[i][2]) <= 0)
                    count++;
            arr.push_back(count);
        }
        return arr;
    }
};