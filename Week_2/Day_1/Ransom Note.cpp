class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>count(26,0);

        for(char i:magazine)
        count[i-'a']++;

        for(char i:ransomNote)
        count[i-'a']--;

        for(int i=0;i<count.size();i++){
            if(count[i]<0)
            return false;
        }
        return true;
    }
};
