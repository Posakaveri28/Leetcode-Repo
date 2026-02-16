class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int diff=(nums[nums.size()-1]*nums[nums.size()-2])-(nums[0]*nums[1]);
        return diff;
    }
};