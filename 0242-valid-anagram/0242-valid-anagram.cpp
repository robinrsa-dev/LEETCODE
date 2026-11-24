class Solution {
public:
    bool isAnagram(string s, string t) {
       string res1=s;
        string res2=t;
        sort(res1.begin(),res1.end());
        sort(res2.begin(),res2.end());
        
        if(res1==res2){
            return true;
        }
        return false;
    }
};