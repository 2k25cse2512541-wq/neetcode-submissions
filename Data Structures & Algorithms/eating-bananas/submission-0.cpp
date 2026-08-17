class Solution {
public:
     bool finish(vector<int>& piles,int h,int mid){
        long long counter =0;
        for(int i=0;i<piles.size();i++){
            counter+=piles[i]/mid;
            if(piles[i]%mid!=0){
                counter++;
            }
            
        }
        return counter<=h;
        
}
    int minEatingSpeed(vector<int>& piles, int h) {
      int lo=1;int hi=*max_element(piles.begin(),piles.end());int ans=-1;
      while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(finish(piles,h,mid)){
            ans=mid;
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
      } 
      return ans; 
    }};

