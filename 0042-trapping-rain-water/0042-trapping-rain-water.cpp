class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int sum=0;
        int i=0,j=n-1;
        int lmax=0,rmax=0;
        for(int i=0;i<n;i++)
        {
            while(i<=j)
            {
                if(height[i]<height[j])
                {
                    if(lmax>height[i])
                       sum+=lmax - height[i];
                    else 
                        lmax = height[i];
                    
                    i++;
                }
                else 
                {
                    if(rmax > height[j])      
                        sum+=rmax-height[j];
                
                else 
                    {
                    rmax = height[j];
                }
                    j--;
                }
                
            }
        }
            return sum;
    }
};