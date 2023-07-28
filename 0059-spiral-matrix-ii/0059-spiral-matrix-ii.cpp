class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int minr = 0,minc = 0;
        int maxr = n-1,maxc = n-1;
        int count = 1;
         vector<vector<int>> v(n, vector<int>(n));
       while(minr<=maxr && minc<=maxc){
        //right
        for(int j = minc;j <= maxc &&     count<=n*n;j++){
             v[minr][j]=count;
            count++;
        }
        
        minr++;
        // if(minr>maxr || minc>maxc)     break;
         //down
         for(int i = minr;i <= maxr &&     count<=n*n;i++){
            v[i][maxc]=count;
            count++;
         }
        maxc--;
        // if(minr>maxr || minc>maxc)     break;
        //left
        for(int j = maxc;j >=minc &&     count<=n*n;j--){
            v[maxr][j]=count;
            count++;
        }
        maxr--;
        // if(minr>maxr || minc>maxc)     break;
        //top
        for(int i = maxr;i >=minr &&     count<=n*n;i--){
             v[i][minc]=count;
            count++;
        }
        minc++;
        }
        return v;
    }
};