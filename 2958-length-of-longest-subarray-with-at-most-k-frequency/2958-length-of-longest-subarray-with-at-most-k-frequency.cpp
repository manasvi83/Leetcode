class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int , int> freq_mp;    
          
        int sz = nums.size(),            
        max_size = 0, 
        head = 0 , tail = 0; 
        
        while( head < sz && tail <=head ){  
            freq_mp[nums[head]]++; 
            
            if(freq_mp[nums[head]] <= k){ 
                max_size = max(max_size , (head - tail + 1)); 
                head++; 
            } else{ 
                while(freq_mp[nums[head]] > k){ 
                    freq_mp[nums[tail]]--;
                    tail++; 
                }
                max_size = max(max_size , (head - tail + 1)); 
                head++;
            }
        }
        return max_size;
    }
};