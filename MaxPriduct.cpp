class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.empty()) return 0;
        int max_prod = nums[0];
        int min_prod = nums[0];
        int result = max_prod;
        
        for (int i = 1; i < nums.size(); i++) {
           
            if (nums[i] < 0) {
                swap(max_prod, min_prod);
            }
            max_prod = max(nums[i], max_prod * nums[i]);
            min_prod = min(nums[i], min_prod * nums[i]);
            result = max(result, max_prod);
        }
        
        return result;
    }
};
