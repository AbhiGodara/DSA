// class Solution {
// public:
//     int bst(int st , int ed , vector<int>& nums , int target){
//         while (st <= ed){
//             int mid = st + (ed-st)/2;

//             if (nums[mid] == target) return mid;
//             else if (nums[mid] > target) ed = mid-1;
//             else st = mid+1;
//         }
//         return -1;
//     }

//     int search(vector<int>& arr, int target){
//         int pivot = 0;
//         int n = arr.size();
    
//         for (int i = 0; i < n-1; i++){
//             if (arr[i] > arr[i+1]){  
//                 pivot = i;
//                 break;
//             }
//         }

//         // return bst(0,pivot,arr ,target) | bst(pivot+1 , n-1 , arr ,target);
//         if (bst(0,pivot,arr ,target) != -1) 
//             return bst(0,pivot,arr ,target);
//         return bst(pivot+1 , n-1 , arr ,target); 
//     }
// };

class Solution{
    public:
        int search(vector<int>& nums, int target){
            int n=nums.size();
            int low=0;
            int high=n-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(nums[mid]==target) return mid;
                if(nums[low]<=nums[mid]){
                    if(target>=nums[low] && target<nums[mid]) high=mid-1;
                    else low=mid+1;
                }
                else{
                    if(target>nums[mid] && target<=nums[high]) low=mid+1;
                    else high=mid-1;
                }
            }
            return -1;
        }
};