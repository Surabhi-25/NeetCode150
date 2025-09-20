class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0){ return 0;} 
        unordered_set<int> s;
        int longest=1;
        int count;
        int x;

        for(int i=0;i<n;++i){
            s.insert(nums[i]);
        }

        for(auto it:s){
            if(s.find(it-1)==s.end()){
                count=1;
                x=it;

                while(s.find(x+1)!=s.end()){
                    count++;
                    x++;
                }
                longest=max(count,longest);
            }

        }
        return longest;
    }
};
