

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    map<int,int> freq;
    for(int i:nums){
        freq[i]++;
    }
    auto comparator = [](pair<int,int> a, pair<int,int> b) {
            return a.second < b.second;
        };

    priority_queue<pair<int,int>, vector<pair<int,int>>,decltype(comparator)> pq(comparator);
    for( auto &p:freq){
        pq.emplace(p.first,p.second);
    }

    vector<int> result;
    for(int i = 0; i < k && !pq.empty(); i++) {
            result.push_back(pq.top().first);
            pq.pop();
        }

  return result;

    }
};
