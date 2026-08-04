class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int columns=matrix[0].size();

        int low=0;
        int high=rows*columns-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int crow=mid/columns;
            int ccols=mid%columns;
            if(matrix[crow][ccols]>target)high=mid-1;
            else if (matrix[crow][ccols]<target)low =mid+1;
            else return true;
        }
        return false;
    }
};