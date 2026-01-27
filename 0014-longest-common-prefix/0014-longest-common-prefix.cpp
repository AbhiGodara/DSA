class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // string result="";
        // int ptr1=0;
        // for(int i=0 ; i<strs[0].size() ; i++){
        //     char x=strs[0][i];
        //     for(int j=1 ; j<strs.size() ; j++){
        //         if(strs[j][i]!=x) return result;
        //     }
        //     result+=x;
        // }
        // return result;

        string prefix=strs[0];
        for(int i=1 ; i< strs.size() ; i++){
            while(strs[i].find(prefix)!=0){
                prefix.pop_back();
                if(prefix=="") return "";
            }
        }
        return prefix;
    }
};