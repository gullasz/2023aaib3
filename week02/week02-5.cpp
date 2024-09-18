//同字母組成的字
class Solution {
public:
    bool isAnagram(string s, string t) {
        int H1[256]={},H2[256]={};//都是0
        for(auto c : s)
        {
            H1[c]++;
        }
        for(auto c : t)
        {
            H2[c]++;
        }
        for(int i=0; i<256; i++)//整個陣列逐一檢查
        {
            if(H1[i] != H2[i]) return false;//左右出現次數不同，就失敗
        }
        return true;//前面沒失敗，就成功
    }
};