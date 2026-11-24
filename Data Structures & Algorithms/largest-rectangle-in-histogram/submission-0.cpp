class Solution {
   public:
    int largestRectangleArea(vector<int>& heights) {
        int res = 0;
        stack<pair<int, int>> stk;
        int maxArea = 0;

        for (int i = 0; i < heights.size(); i++) {
            int start = i;
            while (!stk.empty() && stk.top().second > heights[i]) {
                int index = stk.top().first;
                int height = stk.top().second;
                if (maxArea < height * (i - index)) {
                    maxArea = height * (i - index);
                }
                start = index;
                stk.pop();
            }
            stk.push({start, heights[i]});
        }

        while(!stk.empty()){
            if(maxArea < stk.top().second * (heights.size() - stk.top().first)){
                maxArea = stk.top().second * ((heights.size() - stk.top().first));
            }
            stk.pop();
        }

        return maxArea;
    }
};
