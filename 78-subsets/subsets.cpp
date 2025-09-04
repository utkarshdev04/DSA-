class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> result;
        for (int mask = 0; mask < (1 << n); ++mask) {
            vector<int> sub;
            for (int j = 0; j < n; ++j) {
                if (mask & (1 << j)) {
                    sub.push_back(nums[j]);
                }
            }
            result.push_back(sub);
        }
        return result;
    }
};
