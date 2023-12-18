 
    int search(vector<int>& nums, int target) {
 
        int pivot = -1;
        int low = 0,high = nums.size()-1;
        
     
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target)
                return mid;

          
            else if(nums[low] <= nums[mid]){ //left array is sorted
                
                if(target >= nums[low] && nums[mid] > target ) //low se -mid
                    high = mid-1;
                else
                    low = mid+1;
                
            }
            else { //right array is sorted
                if(nums[mid] < target && target <= nums[high]) //mid-high tak
                    low = mid+1;
                else
                    high = mid-1;
                
            }
               
                
        }
        
        return -1;

        
    }
};

nlogn 0(1)
