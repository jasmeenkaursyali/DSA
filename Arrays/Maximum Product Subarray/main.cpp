class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //VC approach
        
        if(nums.size()==1)return nums[0];
       
        int maxprod=INT_MIN,prod = 1;
        
        for(int i=0;i<nums.size();i++){
            prod*=nums[i];
            
            maxprod = max(maxprod,prod);
            if(prod==0)
                prod=1;
        }
        
        prod = 1;
        for(int i=nums.size()-1;i>=0;i--){
            prod*=nums[i];
            maxprod = max(maxprod,prod);
            if(prod==0)
                prod=1;
        }
        
        
       
        return maxprod;
        
    }
};


0(n) 0(1) 

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        
        //brute force solution
        int maxprod=nums[0];
        int ma = nums[0],mi = nums[0];
        
        
            cout<<ma<<" "<<mi<<endl;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0) swap(ma,mi);
            
            ma = max(nums[i],ma*nums[i]);
            // cout<<nums[i]<<endl;
            mi = min(nums[i],mi*nums[i]);   
            
            cout<<ma<<" "<<mi<<endl;
            maxprod = max(maxprod,ma);
            
        }
        return maxprod;
        
    }
};
