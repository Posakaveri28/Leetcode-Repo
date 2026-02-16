class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxdiff=-1;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int diff=-1;
                if(nums[i]<nums[j]){
                    diff=nums[j]-nums[i];
                }
                if(diff>maxdiff){
                    maxdiff=diff;
                }
            }
        }
        return maxdiff;
    }
};