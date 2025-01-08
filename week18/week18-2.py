class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        M,N = len(matrix),len(matrix[0])
        i,j = 0,0
        #每次i,j移動的量
        di = [0,1,0,-1]
        dj = [1,0,-1,0]
        d = 0 #移動方向
        ans=[]
        while len(ans) < M*N:
            ans.append( matrix[i][j] )
            matrix[i][j] = 999 #代表走過了
            i2,j2 = i+di[d],j+dj[d]
            if i2 >= M or j2 >= N or i2 < 0 or j2 < 0 or matrix[i2][j2]==999: #撞到邊界 or 走過
                d=(d+1)%4 #轉彎
                i2,j2 = i+di[d],j+dj[d]
            i,j=i2,j2
        return ans
            

        