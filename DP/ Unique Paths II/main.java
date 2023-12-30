  int recursion(int i,int j, int [][]obstacleGrid, int[][]dp){

        if(i<0 || j<0) return 0;
        
        if(i==0 && j==0 && obstacleGrid[i][j]==0) return 1;
        
         //Cover obstacle case: let suppose if you have valid cell but still you have obstacle
        if(i>=0 && j>=0 && obstacleGrid[i][j]==1)
            return 0;

        if(dp[i][j]!=-1) return dp[i][j];
    
        int left = recursion(i,j-1,obstacleGrid,dp);
        int up = recursion(i-1,j,obstacleGrid,dp);
        
        
        return dp[i][j] = left + up;
        
    }
    
    public int uniquePathsWithObstacles(int[][] obstacleGrid) {
        int n = obstacleGrid.length;
        int m = obstacleGrid[0].length;
        
        int [][]dp = new int[n][m];
        for(int []arr : dp)
            Arrays.fill(arr,-1);
        
        
        //write recursion bottom right to top left
        return recursion(n-1,m-1,obstacleGrid,dp);
        
    }
