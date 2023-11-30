class Solution {
public:
    // special case: contains duplicates
     // [6,6]  : 12
     //  6 : 0 
     //  6 : 1
      // "wrong this approach : how to handle this"   
          
    
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(nums[i])!=m.end())
                if(nums[i]+nums[i]==target)
                    return{i,m[nums[i]]};
                
           m[nums[i]] = i;
        }
        
        // for(auto x:m)
        //     cout<<x.first<<" "<<x.second<<endl;
        
        for(int i=0;i<nums.size();i++){
            //problem: it pick the same element twice
            if(m.find(target-nums[i])!=m.end() and m[target-nums[i]]!=i)
                return {m[target-nums[i]],i};
            
        }
                          
                          
        return {0,0};
    }
};

//problem : 
//[3,2,4]
// 6

