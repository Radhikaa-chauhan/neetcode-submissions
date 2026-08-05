class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output;
        int j =0;
       for(int i=0; i< nums.size(); i++){
        int mul = 1;
        //  if(i!=j){
        //     mul *= nums[i];
        //     j++;
        //  }
        for(int j = 0; j<nums.size(); j++){
            if(i==j){
                continue;
            }
            else{
                mul*= nums[j];
            }
        }
        output.push_back(mul);
       }
       return output;
    }
};
