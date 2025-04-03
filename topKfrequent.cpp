class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mpp;
        int n = nums.size();

        for(int i = 0; i < n; i++) mpp[nums[i]]++;

        vector<pair<int, int>> tmp;
        for(auto& p : mpp) {
            tmp.push_back({p.second, p.first});
        }
        sort(tmp.begin(), tmp.end());
        vector<int> ans;
        for(int i = tmp.size() - 1; i >= 0; i--) {
            if(k == 0) break;
            ans.push_back(tmp[i].second);
            k--;
        }

        return ans;
    }
};
