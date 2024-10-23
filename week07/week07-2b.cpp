//week07-2b.cpp 
//讀2D陣列、模擬1、2人、畫2D陣列、判斷勝利者
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
    bool testWin(int board[3][3],int now)
    {
        //橫的
        if(board[0][0] == now && board[0][1] == now && board[0][2] == now) return true;
        if(board[1][0] == now && board[1][1] == now && board[1][2] == now) return true;
        if(board[2][0] == now && board[2][1] == now && board[2][2] == now) return true;
        //直的
        if(board[0][0] == now && board[1][0] == now && board[2][0] == now) return true;
        if(board[0][1] == now && board[1][1] == now && board[2][1] == now) return true;
        if(board[0][2] == now && board[1][2] == now && board[2][2] == now) return true;
        //斜的
        if(board[0][0] == now && board[1][1] == now && board[2][2] == now) return true;
        if(board[2][0] == now && board[1][1] == now && board[0][2] == now) return true;

        return false;
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3]={};//3:C的陣列，都放0表示沒東西
        int now=1;
        for(auto move : moves) //1:C++進階迴圈
        {
            int i=move[0],j=move[1]; //2:取出陣列裡的值
            board[i][j]=now;
            if(testWin(board,now))
            {
                if(now==1) return "A";
                else return "B";
            }
            now = 3 - now; //now 在1、2循環
        }
        
        if(moves.size()==9) return "Draw";
        else return "Pending";//還有空的格子要繼續下
    }
};