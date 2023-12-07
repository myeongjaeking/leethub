class Solution {
public:
    int uniquePaths(int m, int n) {
    //if(m==1&&n==1)return 1;
    int c[m][n];
    c[0][0]=1;
    for(int i=1;i<m;i++){
        c[i][0]=1;
    }
    for(int j=1;j<n;j++){
        c[0][j]=1;
        //cout<<c[0][j]<<" ";
    }
    
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            c[i][j]=c[i-1][j]+c[i][j-1];
            //cout<<c[i][j]<<" ";
        }
    }
     
    return c[m-1][n-1];
}
};