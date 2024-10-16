class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ans; //放答案,形狀要return一樣

        stringstream ss(text);//把string轉成像 cin cout 的 stream

        string word1,word2,word3;//第1、2、3個字
        ss >> word1;//向cin >> word1 一樣讀到資料
        ss >> word2;
        while(ss >> word3)
        {
            if(word1==first && word2==second) ans.push_back(word3);//放答案
            word1=word2;
            word2=word3;
        }
        return ans;
    }
};
