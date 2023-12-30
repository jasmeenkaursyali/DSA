   public int maxScoreSightseeingPair(int[] values) {
     
        //equation evaluate: 
        // values[i] + values[j] + i - j
        // values[i]+i = values[j]-j
        
        
            int pair = -1;
            int maxi = values[0] + 0;
        
            for(int i=1;i<values.length;i++)
            {
                pair = Math.max(pair, maxi + values[i]-i);   
                maxi = Math.max(maxi,values[i]+i);
            }
        
        return pair;
        
    }
