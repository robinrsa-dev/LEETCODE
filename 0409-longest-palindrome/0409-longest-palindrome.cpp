class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>p;
        int res=0;
        int i;
        for(i=0;i<s.size();i++){
            p[s[i]]++;
        }
        bool odd=false;
        for(auto i:p){
            int val=i.second;
            if(val%2==0){
                res=res+val;
            }
            else{
                odd=true;
            }
        }

            if(odd==false){
                return res;
            }
        for(auto i:p){
            int val=i.second;
            if(val%2==1){
                res+=val -1;
            }
            
        }
        return res+1;
    }
};