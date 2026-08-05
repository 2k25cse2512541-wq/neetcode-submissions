class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo=0;int hi=nums.size()-1;
        int mid;
        while(lo<hi){
            int mid=(lo+hi)/2;
            if(nums[mid]>nums[hi]){
                lo=mid+1;
            }
            else {
                hi=mid;
            }
        }
        int rot=lo;
        lo=0;hi=nums.size()-1;
        while(lo<=hi){
            mid=(lo+hi)/2;
            int rm=(mid+rot)%nums.size();
            if(nums[rm]==target) return rm;
            else if(nums[rm]<target){lo=mid+1;

            }
            else{
                hi=mid-1;
            }
        }
        return -1;
    }
};