class Solution {
public:
    int singleNumber(vector<int>& n) {
        int ans = 0;
        for(auto x: n)
        ans^=x;
        return ans;
    }
};
        