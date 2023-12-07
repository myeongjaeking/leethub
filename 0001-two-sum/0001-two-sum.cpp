class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int>intToInt;
    for(int i=0;i<nums.size();i++){
        int result = target-nums[i];
        if(intToInt.find(result)!=intToInt.end()){
            return {intToInt[result],i};
        }
        intToInt[nums[i]]=i;
    }
    return {};
}
};