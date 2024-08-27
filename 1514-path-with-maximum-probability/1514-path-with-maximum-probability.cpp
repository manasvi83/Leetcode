class Solution {
public:
    double dijkstra(vector<pair<int,double>> g[],int n,int s,int e)
    {
        priority_queue<pair<int,double>> pq;
        vector<double> dis(n,0);
        dis[s]=1;
        pq.push({s,1});
        while(!pq.empty())
        {
            pair<int,double> node= pq.top();
            pq.pop();
            for(auto x:g[node.first])
            {
                if(dis[x.first]<dis[node.first]*x.second)
                {
                    dis[x.first]=dis[node.first]*x.second;
                    pq.push({x.first,dis[x.first]});
                }
            }
        }
        return dis[e] == 0 ? 0 : dis[e];

    }

    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int s, int e) {

        vector<pair<int,double>> g[n];
        for(int i=0;i<succProb.size();i++)
        {   
            int x=edges[i][0];
            int y=edges[i][1];
            g[x].push_back({y,succProb[i]});
            g[y].push_back({x,succProb[i]});
        }
        return dijkstra(g,n,s,e);  
    }
};