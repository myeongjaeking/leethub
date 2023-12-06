int result_func(int n,int *result){
    if(result[n] != 0) return result[n];
    if(n==1)return 1;
    else if(n==2)return 2;
    else{
        result[n] = result_func(n-1,result)+result_func(n-2,result);
    }
    return result[n];
}

class Solution {
public:
    int climbStairs(int n) {
        int result[46] = {0,};
        return result_func(n, result);
        
    }
};