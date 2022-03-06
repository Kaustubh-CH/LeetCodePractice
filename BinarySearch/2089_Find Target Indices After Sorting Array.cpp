class Solution {
public:
    vector<int> binSort(vector<int> nums,int target){
        int r =nums.size()-1,l=0;
        vector<int> res;
        int m;
        while(l<=r){
            m = (l+r)/2;
            if(nums[m]==target){
                int a1 =m;
                while(a1<=r && nums[a1]==target){
                   // res.push_back(a);
                    a1++;
                
                }
                int a2 =m-1;
                while(a2>=l&&nums[a2]==target){
                    //res.push_back(a);
                    a2--;
                }
                for(int a = a2+1;a<a1;a++)
                    res.push_back(a);
                //sort(res.begin(),res.end());
                return res;
            }
            if(nums[m]<target){
                l = m+1;
                
            }
            else{
                r = m-1;
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
    vector<int> targetIndices(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        return binSort(nums,target);
        
    }
};
