class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> dups;

        for(int num : nums){
            if(dups.count(num)){
                return true;
            }
            dups[num]++;
        }

        return false;
    }
};