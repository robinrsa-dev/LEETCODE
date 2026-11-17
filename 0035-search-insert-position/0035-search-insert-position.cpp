class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
            else if(target<nums[i]){
                nums.push_back({target});
                sort(nums.begin(),nums.end());
                return i;
            }
            else{
                sort(nums.begin(),nums.end());
                nums.push_back({target});
            }
        }
        return 0;
        
    }
};