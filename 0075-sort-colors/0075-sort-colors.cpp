class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cz=0,co=0,ct=0;
        for(int i=0 ;i<nums.size();i++)
        {
            if(nums[i]==0) cz++;
            else if(nums[i]==1) co++;
            else ct++;
        }
        // vector <int> colors;
        for(int i=0;i<cz;i++)
        {
            nums[i]={0};
        }
        for(int i=cz;i<cz+co;i++)
        {
            nums[i]={1};
        }
        for(int i=cz+co;i<cz+co+ct;i++)
        {
            nums[i]={2};
        }
        // return nums;
    }
};