class Solution {
public:
    vector<string> summaryRanges(vector<int> nums) {
        vector<string> v;
        int n = nums.size();
        if (n == 0) return v;

        int last = nums[0];
        for (int i = 1; i <= n; ++i) {
            if (i < n && nums[i] == nums[i-1]+1) continue;

            if (nums[i-1] == last) v.push_back(to_string(last));
            else v.push_back(to_string(last) + "->" + to_string(nums[i-1]));
            if (i < n) last = nums[i];
        }
        return v;
    }
};