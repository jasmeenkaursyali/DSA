class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        //all subarray 3 loops : 0(n3) 0(1)
        // brute force: 0(n2) 0(1)
    
        // computing sum of subarray using formula
        // for (int i=0; i<n; i++)
        //     result += (arr[i] * (i+1) * (n-i));   
        
        // int n = nums.size();
        // int res = nums[0]; int maxi = INT_MIN;
        // for(int i=0;i<nums.size();i++){
        //     res = (n-i) * nums[i] * (i+1) ; //phle vle + elem + agge vale
        //  maxi = max(res,maxi);
        // }
        // return maxi;
        
        // :this approach is not working here coz...
        // in one particular Element (how many times it would be repeated in whole array : it can clearly defined this..)
        
        int maxi = nums[0]; int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            maxi = max(maxi,sum);
            
            if(sum<0) sum = 0;
        }
        return maxi;
    }
