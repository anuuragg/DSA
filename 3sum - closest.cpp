class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());
        int closestSum = nums[0]+nums[1]+nums[2];
        
        for(int i=0; i<nums.size(); i++){
            int x = i+1;
            int y = nums.size()-1;

            while(x < y){

                int sum = nums[i]+nums[x]+nums[y];

                if(sum == target){
                    return sum;
                } 
                
                if(abs(sum-target) < abs(closestSum-target)){
                    closestSum = sum;
                }

                if(sum < target){
                    x++;
                } else {
                    y--;
                }
            }
        }

        return closestSum;
    }
};