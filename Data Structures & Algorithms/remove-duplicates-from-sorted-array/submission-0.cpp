class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        for(int i : nums){
            s.insert(i);
        }
    
         int i=0;
         for(int n : s){
            nums[i++]= n;
         }
        return s.size();
    }
};