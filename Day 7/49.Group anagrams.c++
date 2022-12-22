class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams;
        vector<vector<string>> ans;
        for (const auto str: strs) {
            string copy_str = str;
            sort(copy_str.begin(), copy_str.end());
            anagrams[copy_str].push_back(move(str));
        }
        for (auto kv: anagrams) {
            ans.push_back(move(kv.second));
        }
        return ans;
    }
};
