class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int cnt=0;
        vector<int> original;
        original= heights;
        sort(heights.begin(),heights.end());
        for(int i=0; i < heights.size() ; i++){
            if(heights[i]!=original[i]) cnt++;
        }
        return cnt;
    }
};