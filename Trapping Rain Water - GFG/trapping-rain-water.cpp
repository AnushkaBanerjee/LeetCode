//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        
        //prev greatest element array
        int prev[n];
        prev[0]=-1;
        int max= arr[0];
        for(int i = 1;i < n;i++){
            prev[i]=max;
            if(max<arr[i]) max = arr[i];
            
            }
        //next greatest element array-> previous as next
        prev[n-1]=-1;
        max = arr[n-1];
        for(int i = n-2;i >=0;i--){
            if(max<prev[i]) prev[i]=max;
            if(max<arr[i]) max = arr[i];
        }
        
        
        
        
        //calculating water
        long long water = 0;
        for(int i = 1;i < n-1;i++){
            if(arr[i]<prev[i]){
                water+=(prev[i]-arr[i]);
            }
        }
        
        return water;
        
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends