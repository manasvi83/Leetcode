class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int hash[100001]={0};
        int mn=0;
        for(int i=0;i<n;i++)
        {
            hash[nums[i]]++;
        }
        for(int i=0;i<=n;i++)
        {
            if(hash[i]==0) mn=i;
        }
        return mn;
    }
};