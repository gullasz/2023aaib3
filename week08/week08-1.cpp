class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {//最有錢有多少錢
        int ans = 0;
        for(auto a : accounts)//挑出一人 a
        {
            int sum = 0;
            for(auto b : a)//a[0]+a[1]+...
            {
                sum += b;
            }
            if(sum>ans) ans = sum;//更有錢就更新
        }    
        return ans;
    }
};