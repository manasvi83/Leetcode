class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    int index = -1;
	int prefixSum = 0;
	int n = nums.size();
	int sum = 0;    
	for(int i=0; i<n; i++)
		sum += nums[i];
	for(int i=0; i<n; i++) {                             
		if(prefixSum == (sum - nums[i] - prefixSum))
        {  
			index = i;                                   
			break;                                       
		}                                              
		prefixSum += nums[i];
	}
	return index;
    }
};