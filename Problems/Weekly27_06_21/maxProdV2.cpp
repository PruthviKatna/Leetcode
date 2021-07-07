    class Solution {
    public:
        int maxProductDifference(vector<int>& nums) {
            int a = INT_MAX;
            int b = INT_MAX;
            int c = INT_MIN;
            int d = INT_MIN;
            
            for(int i =0 ;i<nums.size();i++){
                
            if(nums[i] < a){
                b=a;
                a = nums[i];
            }
            else if(nums[i] < b)
                b = nums[i];
                    
                if(nums[i] > c){
                    d =c;
                    c = nums[i];
                }
                else if(nums[i] >d )
                    d = nums[i];
            
            }
            return c*d -a*b;
        }
    };