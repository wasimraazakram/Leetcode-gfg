class Solution {
public:
    int sumCounts(vector<int>& nums) {
          int n = nums.size();
        int result = 0;
        for (int i = 0; i < n; i++) {
            unordered_map<int, int> hash;
            for (int j = i; j < n; j++) {
                hash[nums[j]]++;
                result += (hash.size() * hash.size());
            }
        }
        return result;
    }
};