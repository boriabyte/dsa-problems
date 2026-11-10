class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> freqWordsMap;

        for(const auto& s : strs){
            vector<int> freqs(26, 0);
            for(char c : s){
                freqs[c - 'a']++;
            }
            string key = to_string(freqs[0]);
            for(int i = 1; i < 26; i++){
                key += ',' + to_string(freqs[i]);
            }

            freqWordsMap[key].push_back(s);
        }
        vector<vector<string>> result;
        for(const auto& pair : freqWordsMap){
            result.push_back(pair.second);
        }

        return result;
    }
};
