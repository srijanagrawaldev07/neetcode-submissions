class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // unordered_set<int> cnt;
        // for(int num : nums){
        //     if(cnt.count(num)==1){
        //         return true;
        //     }
        //     cnt.insert(num);
        // }
        // return false;

        unordered_set<int> number;
        for(int num:nums){
            number.insert(num);
        }
        if(nums.size()!=number.size()){
            return true;
        }
        return false;
        
    }
};