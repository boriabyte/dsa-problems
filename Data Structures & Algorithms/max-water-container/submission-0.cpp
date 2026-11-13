class Solution {
public:
    int maxArea(vector<int>& heights) {

        int l = 0, r = heights.size() - 1;
        int area = 0, res = 0;

        while(l < r){
            area = (r - l) * std::min(heights[l], heights[r]);
            res = std::max(res, area);
            if(heights[l] < heights[r]){
                l++;
            } else {
                r--;
            }
        }

        return res;

    }
};
