#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
class Solution {
public:

bool compare(string a,string b){
    
   return a+b>b+a;
}

string largestNumber(vector<int>& nums){    
    vector<string> v;
    string result;
    int zero=0;
    for(int i=0;i<nums.size();i++){
         if(nums[i]!=0) zero+=1;
    }
    if(zero==0)return "0";
    for(int i=0;i<nums.size();i++){
         v.push_back(to_string(nums[i]));
       
    }
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (!compare(v[i], v[j])) {
                swap(v[i], v[j]);
            }
        }
    }
    for(int i=0;i<nums.size();i++)
    {
        //cout<<v[i]<<endl;
        result += v[i];
    }

    return result;
}
};