class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>a(2,-1);
        int lb=0;
        int ub=nums.size()-1;
        int mid=-1;
        while(lb<=ub){
            mid=ub-(ub-lb)/2;
            if(nums[mid]==target){
                a[0]=mid;
                ub=mid-1;
            }
            else if(nums[mid]<target){
                lb=mid+1;
            }
            else{
                ub=mid-1;
            }
        }
        lb=0,mid=-1,ub=nums.size()-1;
         while(lb<=ub){
            mid=ub-(ub-lb)/2;
            if(nums[mid]==target){
                a[1]=mid;
                lb=mid+1;
            }
            else if(nums[mid]<target){
                lb=mid+1;
            }
            else{
                ub=mid-1;
            }
        }
        return a;
    }
};