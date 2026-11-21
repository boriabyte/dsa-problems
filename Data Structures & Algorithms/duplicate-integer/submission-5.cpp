class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> dups;

        for(int num : nums){
            if(dups.count(num)){
                return true;
            }
            dups.insert(num);
        }

        return false;
    }
};