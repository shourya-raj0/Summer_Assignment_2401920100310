class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int i = 0, j = n - 1, k = n - 1;

        while (i <= j) {
            int sq_i = nums[i] * nums[i];
            int sq_j = nums[j] * nums[j];

            if (sq_i > sq_j) {
                ans[k--] = sq_i;
                i++;
                
            } 
             else {
                ans[k--]=sq_j;
                j--;
            }
        }
        return ans;
    }
};
