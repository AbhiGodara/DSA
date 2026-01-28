class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int result=-1;
        string check=a;
        if(b.size()==0) return 0;
        if(a.find(b)!=string::npos) return 1;
        for(int i=2 ; i<b.size()+5 ; i++){
            check+=a;
            if(check.find(b)!=string::npos) return i;
            if(check.size()>a.size()+b.size()) break;
        }
        return result;
    }
};