  private long recursion(int i, int j, int [][]grid, long[][] dp){
        if(i>=grid.length)
            return  0;
        

        if(dp[i][j]!=-1)
            return dp[i][j];
        
        long ans = 0;
        for(int k=0;k<grid[0].length;k++)
             ans = Math.max(ans,grid[i][k]- Math.abs(k-j) + recursion(i+1,k,grid,dp));
        
        return dp[i][j] = ans;
    }
    
    public long maxPoints(int[][] points) {
        
        int n = points.length;
        int m = points[0].length;
        long [][] dp = new long[n][m];
        
        
        for(long[] row : dp)
            Arrays.fill(row,-1);
        
        long ans = 0;
        for(int j=0;j<m;j++)
            ans = Math.max(ans,points[0][j] + recursion(1,j,points,dp));
   
        return ans;
        
    }

}



https://leetcode.com/problems/maximum-number-of-points-with-cost/


