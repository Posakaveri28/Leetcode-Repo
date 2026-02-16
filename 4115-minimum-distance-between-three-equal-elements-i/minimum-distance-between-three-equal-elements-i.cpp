class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int a,b,c;
        int mindiff=INT_MAX;
       for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            for(int k=j+1;k<nums.size();k++){
                if(nums[i]==nums[j] && nums[j]==nums[k]){
                    int dist = abs(i-j) + abs(j-k) + abs(k-i);
                        mindiff = min(mindiff, dist);
                }
            }
        }
        
       }
       if(mindiff == INT_MAX)
            return -1; 
        return mindiff; 
    }
};