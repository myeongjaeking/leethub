class Solution {
public:
int lengthOfLastWord(string s) {
    int len = s.length();
    int cnt=0;
    vector<char>a;
    for(int i=0;i<len;i++){
        if(s[i]!=' '){
            a.push_back(s[i]);
            cnt++;
        }
        else if(i<len-1&&s[i+1]!=' '){
            a.clear();
            cnt=0;
        }
    }
    return cnt;
}
};