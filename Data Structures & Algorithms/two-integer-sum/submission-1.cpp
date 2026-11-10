class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> twoSumMap;

        for(int i = 0; i < nums.size(); i++){
            twoSumMap[nums[i]] = i;
        }

        for(int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if(twoSumMap.count(diff) && twoSumMap[diff] != i){
                return {i, twoSumMap[diff]};
            }
        }

        return {};

    }
};
