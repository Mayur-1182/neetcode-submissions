class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>smap;
        unordered_map<char,int>tmap;
        int s1=s.length();
        int t2=t.length();
        if(s1!=t2){
            return false;
        }
        int i=0;
        while(i<s1){
            smap[s[i]]++;
            tmap[t[i]]++;
            i++;
        }
        if(smap==tmap){
            return true;
        }
        return false;
        
    }
};
