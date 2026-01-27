class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result;
        map<int,int>mapp;
        for(int i=0 ; i<nums.size() ; i++){
            int x=target-nums[i];
            auto it=mapp.find(x);
            if(it!=mapp.end()){
                result.push_back(i);
                result.push_back(it->second);
                // return result;
                return {i,it->second};
            }
            else{
                mapp[nums[i]]=i;
            }
        }
        return result;
    }
};