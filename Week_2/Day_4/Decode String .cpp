class Solution {
public:
    string decodeString(string s) {
        stack<int> numstack;
        stack<string> stringstack;

        int currnum = 0;
        string currstring = "";

        for (char ch : s) {
            if (isdigit(ch)) {
                currnum = currnum * 10 + (ch - '0');
            }

            else if (ch == '[') {
                numstack.push(currnum);
                stringstack.push(currstring);

                currnum = 0;
                currstring = "";
            }
            else if (ch == ']') {
                int num = numstack.top();
                numstack.pop();

                string str = stringstack.top();
                stringstack.pop();

                string temp = "";

                for (int i = 0; i < num; i++) {
                    temp += currstring;
                }

                currstring = str + temp;
            }
            else{
                currstring += ch;
            }
        }
        return currstring ;
    }
};
