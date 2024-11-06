//week09-1a.cpp
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size();
        int N = matrix[0].size();
        int i=0,j=0,dir=0;//dir 方向右0,下1,左2,上3
        int dI[4]={0,1,0,-1};
        int dJ[4]={1,0,-1,0};
        
        vector<int> ans;
        ans.push_back(matrix[i][j]);
        i += dI[dir];
        j += dJ[dir];
        ans.push_back(matrix[i][j]);
        i += dI[dir];
        j += dJ[dir];
        ans.push_back(matrix[i][j]);
        return ans;
    }
};