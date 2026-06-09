class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>freq;
        int l=0,r=0,ans=0;

        for(r;r<s.length();r++){
            freq[s[r]]++;

            while(freq[s[r]]>1){
                freq[s[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};
