class Solution {
public:
    int myAtoi(string s) {
        long long result=0;
        bool negate=false;
        int n=s.size();
        if(n==0) return 0;
        int i=0;
        while(s[i]==' ') i++;
        if(s[i]=='-'){
            negate=true;
            i++;
        }
        else if(s[i]=='+') i++;
        for(i ; i<n ; i++){
            if(48<=((int)s[i]) && ((int)s[i])<=57) result=result*10+(s[i]-'0');
            else break;
            if(result>INT_MAX) return (negate)?INT_MIN:INT_MAX;
        }
        if(negate) result=-1*result;
        if(result>2147483647) result=2147483647;
        else if(result<-2147483648) result=-2147483648;
        return result;
    }
};