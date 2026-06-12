class Solution {
public:
    int start = 0;
    int max = 1;

    void expand(string& s, int left, int right) {

        while (left >= 0 &&
               right < s.size() &&
               s[left] == s[right]) {

            int curr = right - left + 1;

            if (curr > max) {
                max = curr;
                start = left;
            }

            left--;
            right++;
        }
    }

    string longestPalindrome(string s) {

        for (int i = 0; i < s.size(); i++) {
            expand(s, i, i);
            expand(s, i, i + 1);
        }

        return s.substr(start, max);
    }
};
