//左邊s、右邊t，找出左右不同、多出的字母
class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[256]={};//大陣列，都設為0
        for(char c : s)//針對s裡的每個字母c
        {
            H[c]++;//把Histogram痛計圖資料 H[c]加1 多1次
        }
        for(char c : t)//針對t裡的每個字母c
        {
            H[c]--;//用掉剛剛累積的H[c]
            if(H[c]<0)return c;
        }
        return 0;
    }
};