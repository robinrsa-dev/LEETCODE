class Solution {
public:
int first(vector<int>& arr, int x){
    int n=arr.size();
        int low=0;
        int high=n-1;
        int count =0;
        int res=-1;
      
    
       
        while(low<=high){
            int mid=(high+low)/2;

            if(arr[mid]>x){
                high=mid-1;
         
            }
            
            else if(arr[mid]<x){
                low=mid+1;
                  
            }
            else{
                res=mid;
                high=mid-1;//left wali saari dukaane dekhlo ek baar
                
            }
        }
        return res;
        
    }

int second(vector<int>& arr, int x){
    int n=arr.size();
        int low=0;
        int high=n-1;
        int count =0;
      
        int res=-1;
       
        while(low<=high){
            int mid=(high+low)/2;

                 if(arr[mid]>x){
                high=mid-1;
         
            }
            
            else if(arr[mid]<x){
                low=mid+1;
                  
            }
            else{
                res=mid;
                low=mid+1;//right wali sasari dukane dekhlo ek baar
                
            }
        }

        return res;
        
    }

    
    vector<int> searchRange(vector<int>& arr, int x) {

        return {first(arr,x),second(arr,x)};
        
    }
};