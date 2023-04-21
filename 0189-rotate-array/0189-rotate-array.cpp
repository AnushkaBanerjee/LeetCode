class Solution {
public:
    void display(vector<int>&n){
        for(int i = 0;i < n.size();i++){
            cout<<n[i]<<" ";
        }
    }
    
    
    
    
    
    void reversePart(int i ,int j,vector<int>&v){
    while(i<j){
        int temp = v[i];
        v[i] = v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
    
    
    
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
    
        //if k >= n -> this will give index out of bound for the below code
        if(k > n) k %=n;
        //reversePart of Array
         
        reversePart(0,n-k-1,nums);
        reversePart(n-k,n-1,nums);
        reversePart(0,n-1,nums);
        cout<<endl;
        display(nums);

        
    }
};