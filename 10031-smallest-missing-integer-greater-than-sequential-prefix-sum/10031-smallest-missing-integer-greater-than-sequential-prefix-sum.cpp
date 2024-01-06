class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        for(int i =1; i<nums.size();i++){
            if(nums[i-1]+1 == nums[i]) {sum += nums[i];}
            else break;
        }
        sort(nums.begin(),nums.end());
        for(int i = 0; i< nums.size(); i++){
            if(sum == nums[i]){
                sum++;
            }
        }
        return sum;
        
        
        
        // int slow=0, fast =0, sum=0,mis_el;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[fast>=nums[i]]) {fast++; continue;}
        //     else if( nums[fast] < nums[i]) break;
        // }
        // while(fast--)
        // {sum+=nums[fast];}
        // // int n=nums.size();
        // int mx=*max_element(nums.begin(), nums.end());
        // unordered_map<int,int> mp;
        // for(int j=0;j<nums.size();j++)        
        // {
        //     mp[nums[j]]++;                
        // }
        // for(int k=slow; k<=mx+1;k++)
        // {
        //     if(mp[k]==0) {return k; cout<<k;}
        // }
        // return 0;
    }
};