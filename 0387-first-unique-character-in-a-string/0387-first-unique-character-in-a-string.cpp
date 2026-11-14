class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>f;
        int i=0;
        for(int i=0;i<s.length();i++){
            f[s[i]]++;
        }

        for(int i=0;i<s.length();i++){
           
            if(f[s[i]]==1){
                return i;
                i++;
            }
        }  
        return -1; 
    }
};