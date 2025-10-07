// Bubble Sort
class Solution {
public:
    void recBubble(vector<int> &nums, int n){
        if(n==0)return;

        for(int i=0;i<n-1;i++)if(nums[i]>nums[i+1])swap(nums[i],nums[i+1]);

        recBubble(nums,n-1);
    }

    vector<int> sortArray(vector<int>& nums) {
        //Bubble SORT
        // for(int i=0;i<nums.size();i++){
        //     for(int j=0;j<nums.size()-1;j++){
        //         if(nums[j]>nums[j+1])swap(nums[j],nums[j+1]);
        //     }
        // }
        // return nums;

        //Rec Bubble Sort
        recBubble(nums, nums.size());
         return nums;
    }
};
