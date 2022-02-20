
class Solution {
public:
    int minimumSum(int num) {
        vector<int> ds;
        while(num > 0){
          ds.push_back(num%10);
          num/=10;
        } 
        sort(ds.begin(), ds.end());
        int rtn = 0;
        int mul = 1;
        for (int i=ds.size()-1; i>=0; i-=2) {
          int cur = ds[i];
          if (i >=1) cur+= ds[i-1];
          rtn += cur * mul;
          mul *= 10;
        }
        return rtn;
    }
};
