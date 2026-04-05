class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=0;
        int sum=0;
        int ans=INT_MAX;
        for(right ; right<n ; right++){
            sum=sum+nums[right];
            while(sum>=target){
                ans=min(ans, right-left+1);
                sum=sum-nums[left];
                left++;
            }
        }
        return (ans==INT_MAX)?0:ans;
    }
};