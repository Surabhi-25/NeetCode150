

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int> freq;
    for(int i:nums){
        freq[i]++;
    }


    priority_queue<pair<int,int>> pq;
    for( auto &p:freq){
        pq.emplace(p.second,p.first);
    }

    vector<int> result;
    for(int i = 0; i < k && !pq.empty(); i++) {
            result.push_back(pq.top().second);
            pq.pop();
        }

  return result;

    }
};
