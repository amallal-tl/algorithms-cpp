class Solution {
public:
    bool isSubsequence(string s, string t) {
        int indS = 0, indT = 0;
        int sLen = s.length(), tLen = t.length();
        if(sLen == 0) return true;
        while(indS < sLen && indT < tLen){
            if(s[indS] == t[indT]){
                indS++, indT++;
            } else if(s[indS] != t[indT]){
                indT++;
            }
        }
        if(indS == sLen) return true;
        else return false;
    }
};