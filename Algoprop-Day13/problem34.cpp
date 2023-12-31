class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int, int> map;
        map[0] = 1;
        
        int count = 0;
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += nums[i];
            
            int rem = sum % k;
            if(rem < 0){
                rem += k;
            }
            if(map.find(rem) != map.end()){
                count += map[rem];
            }
            map[rem]++;
        }
        return count;
    }
};