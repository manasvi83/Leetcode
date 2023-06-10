class Solution {
public:
    int singleNumber(vector<int>& nums) {
//         int ans=0;
        
//         sort(nums.begin(),nums.end());
        
//             for(int i=1;i<n;i+2)
//             {
//                 if(nums[i]!=nums[i-1])
//                 {
//                     ans=nums[i-1];
                   
//                 }
//             }
//             ans=nums[n-1];
            
        
        int ans=0;
        for(auto x:nums)
        {
            ans^=x;
            
        }
        
        
        
        // int hash[30001]={0};
        // int ans=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     hash[nums[i]]++;
        // }
        // for(int i=0;i<30001;i++)
        // {
        //     if(hash[i] == 1)
        //     {
        //         ans=i;
        //     }
        // }
        return ans;
    }
};