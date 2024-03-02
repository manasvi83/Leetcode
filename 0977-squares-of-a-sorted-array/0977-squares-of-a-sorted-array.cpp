class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n); 
        
        for(int i = 0; i < n; i++){
            nums[i] = nums[i] * nums[i];
        }
        
        
        int left = 0;
        int right = n - 1;
        for (int i = n - 1; i >= 0; i--){
            if(nums[left] > nums[right]){
                result[i] = nums[left];
                left++;
            }
            else{
                result[i] = nums[right];
                right--;
            }
        }
        
        return result;
    }
};