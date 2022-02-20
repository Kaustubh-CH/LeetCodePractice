//Note this program is better run using a greedy approach
class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1)
            return true;
       
            
       vector<bool> D1 (nums.size(),0); 
        D1[nums.size()-1]=1;
        if(nums[nums.size()-2]>=1)
            D1[nums.size()-2]=1;
        else 
            D1[nums.size()-2]=0;
       for(int i =nums.size()-3;i>=0;i--){
            bool res = false;
           for(int j = 1;j<=nums[i]&&(i+j<nums.size());j++){
               if(D1[i+j]==1){
                   res = 1;
                   break;
               }
           }
           D1[i]=res;
       }
    return D1[0];
    }
};
