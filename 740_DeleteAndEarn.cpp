class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        if(nums.size()<2){
            int max1=0;
            for(auto i = nums.begin();i!=nums.end();i++){
                if(*i>max1)
                    max1=*i;
            return max1;
            }
        }
        map <int,int> Map1;
        sort(nums.begin(), nums.end());
        for(int i =0;i<nums.size();i++){
            
            if(Map1.find(nums[i])!=Map1.end()){
                Map1[nums[i]]++;
                
            }
            else{
                Map1.insert({nums[i],1});
            }
        }
        int prev=0,next=0;
        prev = Map1.begin()->first*Map1.begin()->second;
        auto N = Map1.begin();
        N++;
        if((N->first)-1==Map1.begin()->first)
            next =max(prev,N->first*N->second);
        else 
            next = N->first*N->second+prev;
        int temp =0;
        auto i = Map1.cbegin();
        
        std::advance(i, 2);
        for(;i!=Map1.end();i++){
            temp = next;
            auto j = i;
            j--;
            if(i->first-1==(j)->first)
                next = max(i->first*i->second+prev,next);
            else
                next= next + i->first*i->second;
            prev = temp;
        }
        return next;
        
    }
};
