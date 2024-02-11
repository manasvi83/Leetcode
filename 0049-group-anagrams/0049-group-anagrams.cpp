class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        vector<vector<string>> ans;

        for(auto x : strs)
        {
            string word = x;
            sort(word.begin(),word.end());
            m[word].push_back(x);
        }

        for(auto x : m)
        {
            ans.push_back(x.second);
        }

        return ans;
    }
};