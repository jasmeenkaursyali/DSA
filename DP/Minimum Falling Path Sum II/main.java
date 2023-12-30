       
    
         //Base case
        if (j < 0 || j > matrix[0].length-1 || i < 0 )
            return Integer.MAX_VALUE-1000;
        
        if(i==0) //if it is first row
            return matrix[i][j];
    
        
        if(dp[i][j]!=-1)
            return dp[i][j];
    
    
        int mini = Integer.MAX_VALUE;
        for(int k=0; k<matrix[0].length; k++)
        {
            if(k!=j) //not taking two adjacents cells of same columns
                mini = Math.min(mini,recursion(i-1, k, matrix, dp));
        }
    
        return dp[i][j] = matrix[i][j] + mini;
    
    }
    
    
    public int minFallingPathSum(int[][] grid) {
        int n = grid.length;
        int m = grid[0].length;
        int ans = Integer.MAX_VALUE;
        
        int [][]memo = new int[n][m];
        for(int []row : memo)
            Arrays.fill(row,-1);
        
            
        for(int j=0;j<m;j++)
            ans = Math.min(ans, recursion(n-1, j, grid, memo));
        
        return ans;
    }
}
