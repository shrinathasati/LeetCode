class Solution(object):
    def countPaths(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        m=len(grid)
        n=len(grid[0])
        mod=10**9+7
        direction=[[0,1],[0,-1],[1,0],[-1,0]]
        dp=[[1]*n for _ in range(m)]
        cell_list=[[i,j] for i in range(m) for j in range(n)]
        cell_list.sort(key=lambda x: grid[x[0]][x[1]])


        for i,j in cell_list:
            for di,dj in direction:
                cur_i=i+di
                cur_j=j+dj
                if 0<=cur_i<m and 0<=cur_j<n and grid[cur_i][cur_j]>grid[i][j]:
                    dp[cur_i][cur_j]+=dp[i][j]
                    dp[cur_i][cur_j]%=mod

        return sum(sum(row)%mod for row in dp)%mod
            
