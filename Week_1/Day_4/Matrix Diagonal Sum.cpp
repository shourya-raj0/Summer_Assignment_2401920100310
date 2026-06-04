class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
int n= mat.size()-1;
        for(int i=0,j=0; i<mat.size();i++,j++){
            if(i==j ){
                sum+=mat[i][j];
            }
        }

        
        for(int i=0; i<mat.size();i++){
                sum+=mat[i][n-i];
        }
        if(n%2==0){
            sum-=mat[n/2][n/2];
        }
        return sum;
    }
};
