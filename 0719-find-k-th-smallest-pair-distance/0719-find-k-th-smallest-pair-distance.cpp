class Solution {
    int solve(int t,vector<int> & nums){
        int cnt = 0;
        for(int l=0,r=1; r<nums.size(); r++){
            while(l<r && t < nums[r]-nums[l]) l++;
            cnt += r-l;
        }
        return cnt;
    }
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l=0,r=nums.back(),mid;
        while(l<r){
            mid = (l+r)/2;
            if(solve(mid,nums) < k) l = mid+1;
            else r = mid;
        }
        return l;
    }
};