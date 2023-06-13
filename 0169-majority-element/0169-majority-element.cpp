class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int e=nums[0];
        for(int i=0;i<nums.size();i++)
        {
              if(nums[i]==e) count++;
            else count--;
            
            if(count==0) {e=nums[i]; count=1;}
                      
        }
        return e;
    }
};