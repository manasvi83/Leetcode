class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        // int count=0;
        // for(int i=0;i<nums.size()-1;i++)
        // {
        //     for(int j=0;j<nums.size()-1;j++)
        //     {
        //         if(nums[i]==nums[j] && i!=j && i<j) count++;
        //     }
        // }
        // return count;
        unordered_map<int,int> map;
        int res=0;
        for(int i:nums)
        {
            res+=map[i]++;
        }
    return res;
        
    }
};