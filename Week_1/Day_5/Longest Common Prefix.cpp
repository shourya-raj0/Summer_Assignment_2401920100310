 string s="";
int n = strs.size();
        for(int i=0; i<strs[0].length();i++){
            char temp = strs[0][i];
         
            for(int j=0; j< n;j++){
                if(strs[j][i]!=temp || i>=strs[j].length()){
                   return s;
                }
            }
            s.push_back(temp);
        }
        return s;
