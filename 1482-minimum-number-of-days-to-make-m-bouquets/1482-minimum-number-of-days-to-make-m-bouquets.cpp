class Solution {
public:
    bool check(vector<int>& bloomDay, int m, int k,int mid){
    int c=0;int total=0;
    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=mid){
            c++;
            if(c==k){
                total++;
                c=0;
            }
        }else c=0;
    }
    if(total>=m){
        return true;
    }return false;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int st=0;int end=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        while(st<=end){
            int mid=(st+end)/2;
            if(check(bloomDay,m,k,mid)){
                ans=mid;
                end=mid-1;
            }else{
                st=mid+1;
            }
        }
        return ans;
    }
};