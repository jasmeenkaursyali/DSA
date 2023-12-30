 int recursion(int i,int j, int[][]matrix, int[][]dp){
        
         //Base case
         if (j < 0 || j > matrix[0].length-1 || i < 0 )
            return Integer.MAX_VALUE;
        
        if(i==0) //if it is first row
            return matrix[i][j];
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int left = recursion(i-1,j-1,matrix, dp);
        int down = recursion(i-1,j,matrix, dp);
        int right = recursion(i-1,j+1,matrix, dp);
        
        
        return dp[i][j] = matrix[i][j] + Math.min(right,Math.min(left,down));
          
        
    }
    
    
    public int minFallingPathSum(int[][] matrix) {
        int n = matrix.length;
        int m = matrix[0].length;
        int ans = Integer.MAX_VALUE; 
        
        int [][]memo = new int[n][m];
        for(int []row : memo)
            Arrays.fill(row,-1);
        
            
        for(int j=0;j<m;j++)
            ans = Math.min(ans, recursion(n-1,j,matrix,memo));
        
        return ans;
    }
}
