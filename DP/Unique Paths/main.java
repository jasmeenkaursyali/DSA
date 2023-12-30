
int recursion(int i,int j, int m,int n,Integer dp[][]){
        if(i>=m || j>=n)
            return 0;
        
        //when it reaches at end
        
        if(i==m-1 && j==n-1)
            return 1;
        
        if(dp[i][j]!=null)
            return dp[i][j];
        
        int right =  recursion(i,j+1,m,n, dp);
        int bottom =   recursion(i+1,j,m,n, dp);
        
        return dp[i][j] = right+bottom;
        
    }
    
    public int uniquePaths(int m, int n) {
        
        Integer dp[][] = new Integer[m][n];
        return recursion(0,0,m,n,dp);
        
        
    }


