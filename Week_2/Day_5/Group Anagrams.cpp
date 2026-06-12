class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;

        for(string str: strs){
            vector<int>count(26,0);

            for(char ch:str)
            count[ch-'a']++;

            string key="";
            for(int i:count){
                key+=to_string(i)+",";
            }
            mp[key].push_back(str);
        }

        vector<vector<string>>ans;
        for(auto& pair:mp){
            ans.push_back(pair.second);
        }
        return ans;
    }
};
