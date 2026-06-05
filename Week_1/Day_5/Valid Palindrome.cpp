class Solution {
public:

bool valid(char s){
        if((s>='a' && s<='z')|| (s>='A' && s<='Z')|| (s>='0' && s<='9'))
        return 1;

        else
        return 0;
    }

    char lower(char s){
        if((s>='a' && s<='z')|| (s>='0' && s<='9')){
            return s;
        }
        else{
            return s-'A'+'a';
        }
    }
    bool isPalindrome(string s) {
        string temp = "";

        for(int i=0; i<s.length();i++){
            char ch = s[i];
            if(valid(ch)){
                temp.push_back(ch);
            }
        }
        if(temp =="")
        return true;

        for(int i=0;i<temp.length();i++){
            temp[i]=lower(temp[i]);
        }

        int st=0;
        int e= temp.length()-1;

while(st<e){
    if(temp[st]!=temp[e])
    return false;
else{
    st++;
    e--;
}

}
return true;

    }
};
