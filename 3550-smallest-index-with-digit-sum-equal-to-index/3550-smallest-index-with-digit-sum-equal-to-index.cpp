class Solution {
public:
int Sum(int n) {
        int total = 0;
        while (n > 0) {
            total += n % 10;
            n /= 10;
        }
        return total;
    }

    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(Sum(nums[i])==i){
                return i;

            }

        }
        return -1;
        
    }
};