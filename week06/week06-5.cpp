class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ans; //�񵪮�,�Ϊ��nreturn�@��

        stringstream ss(text);//��string�ন�� cin cout �� stream

        string word1,word2,word3;//��1�B2�B3�Ӧr
        ss >> word1;//�Vcin >> word1 �@��Ū����
        ss >> word2;
        while(ss >> word3)
        {
            if(word1==first && word2==second) ans.push_back(word3);//�񵪮�
            word1=word2;
            word2=word3;
        }
        return ans;
    }
};
