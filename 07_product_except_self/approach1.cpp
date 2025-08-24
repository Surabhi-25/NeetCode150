class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> muls;
        

        for(int i=0;i<nums.size();i++){
            int mul=1;
            int atback=*(nums.begin());
            nums.erase(nums.begin());
            int n=0;
            while(n<(nums.size())){
                mul=mul*nums[n];
                n++;
            }
            muls.push_back(mul);
            nums.push_back(atback);
        }

    return muls;
      
    }
};
