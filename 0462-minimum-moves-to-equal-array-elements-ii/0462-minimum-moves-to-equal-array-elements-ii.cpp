class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int target=0,sum=0;
        int n=nums.size();
        // target= n/2;
        for(int i=0;i<n;i++)
        {
            if(i!=(n/2)){
                sum+=abs(nums[n/2]-nums[i]);
            }
            else continue;
        }
    return sum;
    }
};