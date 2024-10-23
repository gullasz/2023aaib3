//week07-4b.cpp
class Solution {
public:
    bool isRobotBounded(string instructions) {
        
        int x=0,y=0,dir=0;//dir 方向 0:下 1:下 2:左 3:右
        int dx[]={1,0,-1,0};
        int dy[]={0,1,0,-1};
        for(char c : instructions)
        {
            if(c=='G') 
            {
                x+=(dx[dir]);
                y+=(dy[dir]);
            }
            if(c=='L') dir=(dir+3)%4;//往左轉會有負的，+4 %4取餘數，變+3
            if(c=='R') dir=(dir+1)%4;
        }
        if(x==0 && y==0) return true;//留在原地
        else if(dir==0) return false;//不在原地，且往原方向走，會越走越遠
        else return true;//方向有改，一定會繞圈圈
    }
};