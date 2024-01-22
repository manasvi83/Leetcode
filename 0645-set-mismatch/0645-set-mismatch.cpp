class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
//         int n=nums.size(),sum=0,mis=0, rep=0;
//         unordered_map<int,int> mp;
//         vector<int> res;
//         for(int i=0;i<n;i++){
//             mp[nums[i]]++;
//             sum+=nums[i];
//         }
//         cout<<sum<<" ";

//         for(int i=0;i<nums[n-1];i++){
//             if(mp[i]==2) {
//             rep=i;   
//                 cout<<i<<" ";
//             res.push_back(rep);
            
//             sum=sum-i;
//             }
//         }
//         // if(rep==1) mis+=1;
//         // cout<<rep;
//         mis=(n*(n+1))/2 - sum;
//         cout<<mis;
//         // mis=mis-rep; 
//         // cout<<mis<<",,";
//         res.push_back(mis);
        
        
//         return res;
        
        int n =nums.size();
        vector<int>v(n+1,0);
        int missing=0,duplicate =0;
        for(int i =0;i<n;i++){
            v[nums[i]]++;
        }
        for(int i =1;i<v.size();i++){
            if(v[i]==2)duplicate = i;
            if(v[i]==0)missing = i;
        }
        return {duplicate,missing};
        
    }
};