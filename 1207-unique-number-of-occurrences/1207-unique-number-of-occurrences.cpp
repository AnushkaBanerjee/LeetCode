class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        //[1,2,2,10]
        vector<int> freq;
        int count = 1;
        sort(arr.begin(),arr.end());
        
        
        
        if(arr.size() == 1){
            return true;
        }
        
        if(arr.size() == 2){
            if(arr[0] != arr[1]) return false;
            else return true;
        }
        
        
        for(int i = 0;i < arr.size()-1;i++){//0 1 2
            
            if(arr[i] == arr[i+1]){ //1!=2;2 == 2,2!=10,
                count++;//1 2
            }
            else {
                
                freq.push_back(count);//freq = [1,2,
                count = 1;
            }
            
        }
        
        
        
        if(count >= 1){
            freq.push_back(count);
        }
        
        if(freq.size() == 1){
            return true;
        }
        
        
        sort(freq.begin(),freq.end());
        for(int i = 0;i < freq.size()-1;i++){
            if(freq[i]==freq[i+1]) return false;
        }
        
        return true;
    }
};