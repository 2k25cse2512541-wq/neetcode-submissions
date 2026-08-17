class Solution {
public:
    bool canship(vector<int>&weights,int mid, int days){
        int capacity =mid;int currdays=1;int currwt=0;
      for(int i=0;i<weights.size();i++){
        if(currwt+weights[i]>capacity){
            currwt=0;
            currdays++;
        }
        currwt+=weights[i];
      }
        return currdays<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int lo=*max_element(weights.begin(),weights.end());
        int hi=accumulate(weights.begin(),weights.end(),0);
        int ans=0;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(canship(weights,mid,days)){
                ans=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return ans;
    }
};