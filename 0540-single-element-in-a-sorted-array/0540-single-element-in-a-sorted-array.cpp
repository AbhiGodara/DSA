class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // int n=nums.size();
        // bool flag=true;
        // if(((n-1)/2)%2!=0) flag=false;
        // int start=0;
        // int end=n-1;
        // int mid=start+(end-start)/2;
        // while(start<end){
        //     mid=start+(end-start)/2;
        //     if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]) return mid;
        //     else if(nums[mid]==nums[mid-1]){
        //         if(flag) end=mid-1;
        //         else start=mid+1;
        //     }
        //     else{
        //         if(flag) start=mid+1;
        //         else end=mid-1;
        //     }
        // }
        // return nums[start];
        int n=nums.size();
        int start=0;
        int end=n-1;
        while(start<end){
            int mid=start+(end-start)/2;
            if(mid%2==1) mid--;
            if(nums[mid]==nums[mid+1]) start=mid+2;
            else end=mid;
        }
        return nums[start];
    }
};