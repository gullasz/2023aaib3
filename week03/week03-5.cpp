class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        ///s+s再掐頭去尾
        ///abcabcabc -> abcabcabcabcabcabc -> bcabcabcabcabcab
        ///把s拿去比對，如果有出現(bc'abcabcabc'abcab)，表示是repeated的patern 
        string s2 = s + s;
        int N=s2.length();
        return s2.substr(1,N-2).find(s) != string::npos;//npos對應:沒有這個位置、很大很大
        //substr()切字串 左扣1 右扣1(本來是0...N-1 變成 1....N-2)

    }
};