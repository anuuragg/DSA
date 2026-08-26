class Solution {
  public:
    int countTriplets(int sum, vector<int>& arr) {

        int count=0;
        
        sort(arr.begin(), arr.end());
        for(int i=0; i<arr.size(); i++){
            
            int j = i+1;
            int k = arr.size()-1;
            
            while(j<k){
                
                if(arr[i]+arr[j]+arr[k] < sum){
                    count += k-j;
                    j++;
                } else {
                    k--;
                }
            }
        }
        
        return count;
    }
};