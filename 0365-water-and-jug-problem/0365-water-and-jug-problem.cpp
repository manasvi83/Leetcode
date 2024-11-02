class Solution {
public:
    bool canMeasureWater(int x, int y, int t) {
        if(x+y==t || x==t || y==t) return true;
        if(x+y<t) return false;

        int m=x+y;
        vector<int>dir={x,-x,y,-y};

        vector<int>vis(m+1,0);
        queue<int>q;
        q.push(0);
        vis[0]=1;
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            if(curr==t) return true;

            for(int i=0;i<4;i++){
                int d=curr+dir[i];
                if(d>=0 && d<=m && !vis[d]){
                    vis[d]=1;
                    q.push(d);
                }
            }
        }
        return false;
    }
};