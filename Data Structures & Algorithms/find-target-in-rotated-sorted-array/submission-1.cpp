class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;

        
        int pivot = 0;
        while(l<r){
            int mid =(l+r)/2;
            if(nums[mid] > nums[r]){
                l = mid +1;
            }
            else{
                r = mid;
            }
            
        }
        pivot = l;
        

        int result = binarySearch(nums, 0, pivot-1, target );
        if(result!=-1){
            return result;
        }
        return binarySearch(nums, pivot, nums.size()-1, target);
    }

    int binarySearch(vector<int>& nums, int start, int end, int target){
        while(start<=end){
            int mid = (start + end)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return -1;


    }
};
