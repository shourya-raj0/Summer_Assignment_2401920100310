class Solution {
public:
    vector<string>ans;
    void solve(string temp, int open ,int close, int n){
        if(close==0 && open==0){
            ans.push_back(temp);
            return;
        }

        if(open>0){
            temp.push_back('(');
            solve(temp,open-1,close,n);
            temp.pop_back();
        }
        if(close>0){
            if(open<close){
            temp.push_back(')');
            solve(temp,open,close-1,n);
            temp.pop_back();
            }
        }
    }

    vector<string> generateParenthesis(int n) {
        string temp ="";
        solve(temp,n,n,n);
        return ans;
    }
};
