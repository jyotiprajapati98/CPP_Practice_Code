class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& que){
        vector<int> diff(nums.size(), 0);
        for(const auto& q : que){
            diff[q[0]]++;
            if(q[1] + 1 < nums.size()){
                diff[q[1] + 1]--;
            }
        }

        int cnt =0;
        for(int i=0; i<nums.size(); i++){
            cnt =  cnt + diff[i];
            if(nums[i] > cnt){
                return false;
            }
        }
        return true;
    }
// Time Limit Exceeded
    // bool isZeroArray(vector<int>& num, vector<vector<int>>& que) {
    //     for(int i = 0; i < que.size(); i++){
    //         for(int j= que[i][0]; j<= que[i][1]; j++){
    //             if(num[j] > 0){ num[j]--;}
    //         }
    //     }

    //     for(int i=0; i< num.size(); i++){
    //         if(num[i]!=0) return false;
    //     }

    //     return true;
    // }
};
