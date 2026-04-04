class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n=satisfaction.size();
        sort(satisfaction.begin(), satisfaction.end());
        if(satisfaction[n-1]<=0) return 0;
        int ans=0;
        int sum=0;
        for(int i=0 ; i<n ; i++){
            ans+=satisfaction[i]*(i+1);
            sum+=satisfaction[i];
        }
        for(int i=0 ; i<n ; i++){
            sum=sum-satisfaction[i];
            int x=ans-(satisfaction[i])-(sum);
            ans=max(ans,x);
        }
        return ans;
    }
};