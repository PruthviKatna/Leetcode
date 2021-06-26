#include<iostream>
#include<vector>
 using namespace std;  
    bool canBeIncreasing(vector<int>& nums) {
        int i,count=0;
        int temp = nums[0];
        int n = nums.size();
        if(n ==2)
            return true;
        for(i =1 ;i<n-1;i++){
            if(nums[i] > nums[i+1] && nums[i-1] < nums[i+1]){
                break;}
             if(nums[i] > nums[i+1] && nums[i-1] > nums[i+1]){
                i++; break;
             }
            if(nums[i] == nums[i+1])
                count++;
        }
        if(temp > nums[1])
            i = 1;
        if(temp == nums[1])
        count++;
        if(count == n-1)
            return false;
        while(i < n-1){
            int c = nums[i+1];
            nums[i] = c;
            i++;
        }
        for(int i = 0;i<n-1;i++)
            if(nums[i] > nums[i+1])
                return false;
        return true;
    }

    int main(){

        vector<int> v{1,1,1,1} ;
        bool b = canBeIncreasing(v);
        cout<<b;
    }