class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left=prices[0]; int maxi=0;
        for(int i=1;i<prices.size();i++){
            int right=prices[i];
            if(left<right){
              maxi=max(right-left,maxi);  
            }
            else{
              left=right;  
            }
        }
        return maxi;
    }
};
