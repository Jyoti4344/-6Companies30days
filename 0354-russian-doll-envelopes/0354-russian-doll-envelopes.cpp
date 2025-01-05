class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& env) {
        sort(env.begin(),env.end(), [](vector<int>& a, vector<int>& b){
            if(a[0]==b[0]) return a[1] > b[1];
            return a[0]<b[0];
        });
        vector<int> dp;
        for(auto& envelope : env){
            int height = envelope[1];
            int left = lower_bound(dp.begin(), dp.end(), height) - dp.begin();
            if(left == dp.size()) dp.push_back(height);
            dp[left] = height;
        }
        return dp.size();
    }
};