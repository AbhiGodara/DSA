class Solution {
public:
    string reverseWords(string s) {
        string result="";
        reverse(s.begin(), s.end());
        int ptr1=0;
        int ptr2=0;
        string temp="";
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]==' ' && temp=="") continue;
            else if(s[i]==' ' && temp!=""){
                reverse(temp.begin(), temp.end());
                result+=temp;
                result+=" ";
                temp="";
            }
            if(s[i]==' ') continue;
            temp+=s[i];
            if(i==s.size()-1 && temp!=""){
                reverse(temp.begin(), temp.end());
                result+=temp;
                temp="";
            }
        }
        if(result.back()==' ') result.pop_back();
        return result;
    }
};