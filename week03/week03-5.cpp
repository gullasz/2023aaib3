class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        ///s+s�A�t�Y�h��
        ///abcabcabc -> abcabcabcabcabcabc -> bcabcabcabcabcab
        ///��s���h���A�p�G���X�{(bc'abcabcabc'abcab)�A��ܬOrepeated��patern 
        string s2 = s + s;
        int N=s2.length();
        return s2.substr(1,N-2).find(s) != string::npos;//npos����:�S���o�Ӧ�m�B�ܤj�ܤj
        //substr()���r�� ����1 �k��1(���ӬO0...N-1 �ܦ� 1....N-2)

    }
};