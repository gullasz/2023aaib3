class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string s : operations)
        {
            int N = a.size();//�Ʀr�`��
            if(s == "+") a.push_back(a[N-1]+a[N-2]);//�̫��Ӭۥ[
            else if(s == "D")a.push_back(a[N-1]*2);//�̫�@��*2
            else if(s == "C")a.pop_back();//�R��
            else a.push_back(stoi(s));//�[�J�Ʀr
        }
        int ans=0;//��̭������[�_��
        for(int b : a) ans+=b;
        return ans;
    }
};
