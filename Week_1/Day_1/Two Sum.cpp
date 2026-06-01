class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>hash;
        int n= nums.size();

        for(int i=0 ; i<n ; i++){
            hash[nums[i]]=i;
        }

        for(int i=0; i< n ;i++){

            int sub = target- nums[i];

            if(hash.find(sub)!=hash.end() && hash[sub]!=i){
                return {i,hash[sub]};
            }
        }
        return {-1};
    }
};
