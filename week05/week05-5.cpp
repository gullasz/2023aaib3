class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);//把字串string變成cout的iostream
        string word;
        while( ss >> word )//一直讀，讀完離開
        {
            
        }
        return word.length();//最後殘留的字
    }
};