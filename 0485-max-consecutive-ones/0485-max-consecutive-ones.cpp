class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0,j=0,c=0,mc=0;
        for(j=0;j<nums.size();j++)
        {
            if(nums[j]==1)
            {
                c++;
                if(mc<c) { mc=c;}
                
            }
            else if(nums[j]==0) c=0;
            
        }
        return mc;
    }
};