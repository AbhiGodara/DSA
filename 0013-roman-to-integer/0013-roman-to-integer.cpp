class Solution {
public:
    int romanToInt(string s) {
        int result=0;
        int i=0;
        unordered_map<char,int> map;
        map['I']=1;
        map['V']=5;
        map['X']=10;
        map['L']=50;
        map['C']=100;
        map['D']=500;
        map['M']=1000;
        while(i<s.size()-1){
            if(map[s[i]]>=map[s[i+1]]){
                result+=map[s[i]];
                i++;
            }
            else if(map[s[i]]<map[s[i+1]]){
                result=result+map[s[i+1]]-map[s[i]];
                i+=2;
            }
        }
        if(i==s.size()-1) result+=map[s[i]];
        return result;
    }
};