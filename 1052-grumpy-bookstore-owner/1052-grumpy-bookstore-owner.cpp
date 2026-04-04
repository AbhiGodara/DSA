class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=grumpy.size();
        int total=0;
        for(int i=0 ; i<n ; i++){
            if(grumpy[i]==0) total+=customers[i];
        }
        // int finalTotal=total;
        int ptr1=0;
        int ptr2=ptr1+minutes-1;
        // int windowSum=0;
        int maxloss=0;
        for(int i=ptr1 ; i<=ptr2 ; i++){
            if(grumpy[i] == 1) maxloss+=customers[i];
        }
        int idx=ptr1;
        int temploss=maxloss;
        ptr1++;
        ptr2++;
        while(ptr2<n){
            int remove=(grumpy[ptr1-1]==1) ? customers[ptr1-1] : 0;
            int add=(grumpy[ptr2]==1) ? customers[ptr2] : 0;
            temploss=temploss-remove + add;
            if(temploss>maxloss){
                maxloss=temploss;
                idx=ptr1;
            }
            ptr1++;
            ptr2++;
        }
        for(int i=idx ; i<idx+minutes ; i++){
            if(grumpy[i]==1) total+=customers[i];
        }





        // for(int i=0 ; i<n-2 ; i++){
        //     int temp=customers[i]+customers[i+1]+customers[i+2];
        //     int temp2=0;
        //     if(grumpy[i]==0) temp2+=customers[i];
        //     if(grumpy[i+1]==0) temp2+=customers[i+1];
        //     if(grumpy[i+2]==0) temp2+=customers[i+2];

        //     int tempANS=finalTotal-temp2+temp;
        //     total=max(total, tempANS);
        // }
        return total;
    }
};