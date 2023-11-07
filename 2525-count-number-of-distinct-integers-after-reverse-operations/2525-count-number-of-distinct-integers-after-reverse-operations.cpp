class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int>s;

        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
            string num=to_string(nums[i]);
            reverse(num.begin(),num.end());
            int number=stoi(num);
            s.insert(number);
        }
        return s.size();
    }
};