class Solution {
public:
    int compress(vector<char>& chars) {
        int ans=0;

        for(int i=0;i<chars.size();){
            char ch= chars[i];
            int count=0;

            while(i<chars.size() && ch==chars[i]){
                ++count;
                ++i;
            }

            chars[ans++]=ch;

            if(count>1){
                for(char c:to_string(count))
                chars[ans++]=c;
            }
        }
        return ans;
    }
};
