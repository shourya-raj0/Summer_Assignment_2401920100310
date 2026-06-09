class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if (p.length() > s.length())
            return ans;

        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);

        for (int i = 0; i < p.length(); i++) {
            freq1[p[i] - 'a']++;
            freq2[s[i] - 'a']++;
        }
        int i;
        for (i = 0; i < s.length() - p.length(); i++) {
            if (freq1 == freq2) {
                ans.push_back(i);
            }

            freq2[s[i] - 'a']--;
            freq2[s[i + p.length()] - 'a']++;
        }
        if (freq1 == freq2)
            ans.push_back(i);

        return ans;
    }
};
