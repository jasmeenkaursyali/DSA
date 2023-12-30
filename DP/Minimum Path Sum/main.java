   int recursion(int i,int j, int[][] grid, int[][]dp){
        if(i==0 && j==0)
            return grid[i][j];
        
        if(i<0 || j<0) 
            return Integer.MAX_VALUE;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int up = recursion(i-1,j,grid,dp);
        int left =  recursion(i,j-1,grid,dp);
        
        return dp[i][j] = grid[i][j] + Math.min(up,left);
    }
    public int minPathSum(int[][] grid) {
        
        int n = grid.length;
        int m = grid[0].length;
        int [][]dp = new int[n][m];
        
        for(int[] arr:dp)
            Arrays.fill(arr,-1);
        
        return recursion(n-1, m-1, grid,dp);

    }
