class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int x = nums.size()/2;
        unordered_map<int ,int>mp;
        for(int n: nums){
            mp[n]++;
        }
        for(auto pair : mp){
            if(pair.second > x){
                return pair.first;
            }
        }
        return 0;
    }
};