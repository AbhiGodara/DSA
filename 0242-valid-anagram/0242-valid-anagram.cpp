class Solution {
public:
    bool isAnagram(string s, string t) {
        int nt=t.size();
        int ns=s.size();
        if(nt!=ns) return false;
        unordered_map<char,int> map;
        for(int i=0 ; i<nt ; i++){
            map[t[i]]++;
            map[s[i]]--;
        }
        for(auto& pair: map){
            if(pair.second!=0) return false;
        }
        return true;
    }
};