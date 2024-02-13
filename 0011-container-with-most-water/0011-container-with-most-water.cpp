class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        
        int maxarea = 0;

        int start = 0;
        int end = n-1;

        while(start < end)
        {
            int currarea = min(height[start], height[end]) * (end - start);
            maxarea = max(maxarea, currarea);

            
            if(height[start] <= height[end])
            {
                start++;
            }
            else
            {
                end--;
            }

        }

        return maxarea;
    }
};