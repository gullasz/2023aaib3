//week07-2.cpp 
//讀2D陣列、模擬1、2人、畫2D陣列
class Solution {
public:
    void myDrawBoard(int board[3][3])
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout << board[i][j]<<' ';
            }
            cout << endl;
        }
        cout << endl;
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3]={};//3:C的陣列，都放0表示沒東西
        int now=1;
        myDrawBoard(board);
        for(auto move : moves) //1:C++進階迴圈
        {
            int i=move[0],j=move[1]; //2:取出陣列裡的值
            board[i][j]=now;
            myDrawBoard(board);
            now = 3 - now; //now 在1、2循環
        }
        
        return "B";
    }
};