class Solution {
public:
    int strStr(string haystack,string needle){
    int count=0;
    for(int i=0;i<haystack.length();i++){
        int j;
        if(haystack[i]==needle[0]){
            for(j=0;j<needle.length();j++){
                if(haystack[i+j]!=needle[j]){
                    break;
                }
            }
            if(j==needle.length())
                return i;
          
        }
    }
    return -1;
}
};