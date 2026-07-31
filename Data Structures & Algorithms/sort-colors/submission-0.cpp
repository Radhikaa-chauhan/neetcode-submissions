class Solution {
public:
    void sortColors(vector<int>& nums) {
        int x = 0;
        int y = 0;
        int z = nums.size()-1;

       while(y<=z){
        if(nums[y]==0){ 
            swap(nums[x],nums[y]);
            x++;
            y++;
        }
        else if(nums[y]==1){y++;} 
       

       else if(nums[y]==2){
        swap(nums[z],nums[y]);
        z--;
       }}
    }
};