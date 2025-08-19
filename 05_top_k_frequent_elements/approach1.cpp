  bool comparator(pair<int,int> p1,pair<int,int> p2){
        return p1.second>p2.second;
    }

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    map<int,int> freq;
    for(int i:nums){
        freq[i]++;
    }

    vector<pair<int,int>> vec;
    for( auto &p:freq){
        vec.emplace_back(p.first,p.second);
    }

  
    sort(vec.begin(),vec.end(), comparator);
    vector<int> result;
    
    while(k-- && !vec.empty()){
        result.push_back(vec[k].first);
    }
 
  return result;

    }
};
