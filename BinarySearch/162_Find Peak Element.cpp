class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()<2)
            return 0;
        int l =0,r = nums.size()-1,mid;
        while(l<=r){
            mid = (l+r)/2;
            if(mid ==0 ){
             if(nums[mid]>nums[mid+1])
                 return mid;
            else
                return mid+1;
                
            }
            if(nums[mid]>nums[mid-1]){
                if(mid ==nums.size()-1)
                    return mid;
                if(nums[mid]>nums[mid+1])
                    return mid;
                else
                    l = mid+1;
            }
            else if(nums[mid]<nums[mid-1]){
                
                r = mid-1;
            }
                
        }
    return 0;
    }
};
