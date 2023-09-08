class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long max_sum = LONG_MIN;
        long long sum=0;
        int n= nums.size();
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(sum>max_sum)
                {
                    max_sum=sum;
                
                }
            if(sum<0)
                {
                    sum=0;
                } 
            // cout<<sum<<" ";
            // cout<<max_sum<<" ";
        }
        return max_sum;
    }
};