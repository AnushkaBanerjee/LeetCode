class Solution {
public:
    void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}
    
    int countPairs(vector<int> &arr,int low,int mid,int hi){
        int right = mid+1;
        int cnt = 0;
        for(int i = low;i <= mid;i++){
            while(right<= hi && arr[i] >(long long) 2*arr[right])right++;
            cnt += (right - (mid+1));
        }
        return cnt;
    }

int mergeSort(vector<int> &arr, int low, int high) {
    int count = 0;
    if (low >= high) return count;
    int mid = (low + high) / 2 ;
    count+= mergeSort(arr, low, mid);  // left half
    count+= mergeSort(arr, mid + 1, high); // right half
    count+=countPairs(arr,low,mid,high);
    merge(arr, low, mid, high);  // merging sorted halves   
    return count;
}
    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        count = mergeSort(nums,0,n-1);
        return count;
    }
    
    
};