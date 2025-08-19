class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int i : nums) {
            freq[i]++;
        }

        // MIN HEAP - removes lowest frequency elements when size > k
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        
        for(auto &p : freq) {
            pq.emplace(p.second, p.first);
            if(pq.size() > k) {  
                pq.pop(); // Removes LOWEST frequency
            }
        }
        
        vector<int> result;
        while(!pq.empty()) {
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;
    }
};
