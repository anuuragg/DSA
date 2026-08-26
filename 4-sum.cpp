class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;

        sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i=0; i < n-3; i++){

            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }

            for(int l=i+1; l < n-2; l++){

                if(l > i+1 && nums[l] == nums[l-1]){
                    continue;
                }

                int j = l+1;
                int k = nums.size()-1;

                while(j < k){
                    long long sum = (long long)nums[i] + nums[l] + nums[j] + nums[k];

                    if(sum == target){
                        result.push_back({nums[i], nums[l], nums[j], nums[k]});
                        
                        while(j<k && nums[j] == nums[j+1]){
                            j++;
                        }

                        while(j<k && nums[k] == nums[k-1]){
                            k--;
                        }

                        j++;
                        k--;
                    } else if (sum > target){
                        k--;
                    } else {
                        j++;
                    }
                }
            }
        }

        return result;
    }
};