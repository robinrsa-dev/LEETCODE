class Solution {
public:
    int singleNumber(vector<int>& nums) {
            sort(nums.begin(),nums.end());
          
            unordered_map<int,int>freq;
            for(int i :nums){
                freq[i]++;
            }
            
            for(const auto& [num,count]:freq){
                if(count==1){
                    return num;
                }
            }
            return 0;
            
        
    }
};