class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        vector<int> res(temperatures.size(), 0);
        stack<pair<int, int>> stk;

        for(int i = 0 ; i < temperatures.size(); i++){
            while(!stk.empty() && temperatures[i] > stk.top().first){
                auto pr = stk.top();
                stk.pop();
                res[pr.second] = i - pr.second;
            }
            stk.push({temperatures[i], i});
        }
        
        return res;

    }
};
