class Solution {
public:
    int minZeroArray(vector<int>& nums, vector<vector<int>>& que) {
        int n = nums.size(), sum = 0, k = 0;
        vector<int> cnt(n+1, 0); // size of vector + 1 , all initialize with Zero
        for(int i=0; i<n; i++){
           while(sum + cnt[i] < nums[i]){
            if(k == que.size()){
                return -1;
            }
            int left = que[k][0];
            int right = que[k][1];
            int val = que[k][2];
            k++;

            if(right < i) continue;
            cnt[max(left, i)] = cnt[max(left, i)] + val;
            cnt[right + 1] = cnt[right + 1] - val;
           }

         sum = sum + cnt[i];
        }
        return k;
       
    }
};
