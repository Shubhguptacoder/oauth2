class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        
        int flip_cnt=0;
        int k=3;
        int ans=0;
        
        for(int i=0;i<n;i++){
            if(i>=k and nums[i-k]==-1){
                flip_cnt--;
            }

            if(flip_cnt%2==nums[i]){
                if((i+k)>n) return -1;
                flip_cnt++;
                ans++;
               nums[i]=-1;

            }
        }
        return ans;
    }
};
