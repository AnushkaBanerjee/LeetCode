class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1); //inserting the 1st element

    //calculate the rest of the elements:
    for (int col = 1; col < rowIndex+1; col++) {
        ans = ans * (rowIndex+1 - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
    }
};