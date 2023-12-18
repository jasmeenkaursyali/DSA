    int findMin(vector<int>& nums) {
        
        int minElem = nums[0];
        int low = 0,high = nums.size()-1;
        
        while(low<=high){
            int mid = low + (high-low)/2;
                
            if(nums[low] <= nums[mid]){
                minElem = min(minElem,nums[low]);
                low = mid+1;
            }
            else{ 
                minElem = min(minElem,nums[mid]);
                high = mid-1;
            }
            
        }
        
        
        return minElem;
    }


nlogn 0(1)

  
