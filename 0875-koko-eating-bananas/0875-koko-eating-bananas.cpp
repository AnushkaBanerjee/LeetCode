class Solution {
public:
    int calculateTotalHours(vector<int> &v, int hourly,int limit) {
    int totalH = 0;
    int n = v.size();
    //find total hours:
    for (int i = 0; i < n; i++) {
        if(v[i]%hourly == 0) totalH += v[i]/hourly;
        else totalH += v[i]/hourly + 1;
        if(totalH > limit) break;
    }
    return totalH;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(),piles.end());

    //apply binary search:
    while (low <= high) {
        int mid = (low + high) / 2;
        int totalH = calculateTotalHours(piles, mid,h);
        if (totalH <= h) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return low;
    }
};