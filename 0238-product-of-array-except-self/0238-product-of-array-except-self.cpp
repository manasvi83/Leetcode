class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // vector<int> ans;
        // int product=1;
        // for(int i=0; i<nums.size();i++){
        //     product*=nums[i];  
        // }
        // for(int i=0; i<nums.size();i++){
        //     if(nums[i]!=0){
        //         ans.push_back(product/nums[i]);  
        //     }
        //     else 
        // }
        
        
        vector<int> ans(size(nums),1);
        for(int i = 1; i < size(nums); i++)                          
            ans[i] = ans[i-1] * nums[i-1];
        for(int i = size(nums)-1, suffixProd = 1; i >= 0; i--) {
            ans[i] *= suffixProd;                                   
            suffixProd *= nums[i];                           
        }
        return ans;
    }
};