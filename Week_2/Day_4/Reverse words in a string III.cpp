class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int l = 0, n = s.length();

        for (l; l <= n; l++) {
            if (s[l] == ' ' || l == n) {
                int r = l - 1;
                while (r >= 0 && s[r] != ' ') {
                    ans.push_back(s[r]);
                    r--;
                }
                if (l != n) {
                    ans.push_back(' ');
                }
            }
        }
        return ans;
    }
};
