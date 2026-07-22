class Solution {
public:
    int search(vector<int>& nums, int target) {
         int low = 0 , high = nums.size()-1;
         while( low < high){
            int mid = low + (high - low)/2;
            if(nums[mid] > nums[high]){
                low = mid +1;
            }else{
                high = mid ;
            }
         }
         int pivot = low;

         int result = search(nums, target, 0, pivot- 1);
         if(result != -1){
            return result;
         }
          return search( nums, target, pivot , nums.size()-1);
    }

    int search( vector<int>& nums, int target , int left , int right){
        while(left <= right){
            int mid = left + (right -left)/2;
            if(nums[ mid ] == target){
                return mid;
            }else if( nums[mid] > target){
                right = mid -1;
            }else{
                left = mid+1;
            }

        }
        return -1;
    }
};
