class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        
        vector<int>pre(n);
        vector<int>suff(n);
        
        
        int one = nums[0];
          pre[0] = nums[0];
        for(int i=1;i<nums.size();i++){
          one*=nums[i];
        pre[i] = one;
        }
        
        int two = nums[nums.size()-1];
          suff[nums.size()-1] = two;
        for(int i=nums.size()-2;i>=0;i--){
          two*=nums[i];
        suff[i] = two;
        }
        
        vector<int>ans;
        ans.push_back(suff[1]);
        for(int i=1;i<nums.size()-1;i++){
         ans.push_back(pre[i-1] * suff[i+1]);
            
        }
        
        ans.push_back(pre[nums.size()-2]);
        return ans;
        
    }
};



0(n) 0(n)




Efficient Approach :

#include <iostream>
#include <vector>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    
    vector<int> ans(n, 1); // Initialize the result array with 1
    
    // Calculate the left products and update the result array
    int left = 1;
    for (int i = 0; i < n; i++) {
        ans[i] *= left;
        left *= nums[i];
    }
    
    // Reset left to 1 and calculate the right products, updating the result array
    int right = 1;
    for (int i = n - 1; i >= 0; i--) {
        ans[i] *= right;
        right *= nums[i];
    }
    
    return ans;
}

int main() {
    // Example usage
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = productExceptSelf(nums);

    // Print the result
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
