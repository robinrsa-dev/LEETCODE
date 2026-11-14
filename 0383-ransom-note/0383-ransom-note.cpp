class Solution {
public:
 bool fun(unordered_map<char,int>have,
        unordered_map<char,int>need){
            for(auto i:need){
                char c=i.first;
                int fneed=i.second;
                int fhave=have[c];

                if(fhave<fneed){
                    return false;
                }
                
            }
            return true;
        }
    bool canConstruct(string ransomNote, string magazine) {

        unordered_map<char,int>have;
        unordered_map<char,int>need;
        int r=ransomNote.size();
        int m=magazine.size();
        int i;
        for(i=0;i<r;i++){
            need[ransomNote[i]]++;
        }

          for(i=0;i<m;i++){
            have[magazine[i]]++;
        }
    return fun(have,need);
   
        
        
    }
};