//question: https://leetcode.com/problems/rearrange-array-elements-by-sign/description/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int size = nums.size();
        vector<int> positive;
        vector<int> negative;
        int k = 0;
        for(int i = 0; i< size; i++){
            if(nums[i] > 0){
                positive.push_back(nums[i]);
            }
            else{
                negative.push_back(nums[i]);
            }
        }
        for(int i = 0; i< size/2; i++){
            nums[k++] = positive[i];
            nums[k++] = negative[i];
        }
        return nums;
    }
};

//Approach: initialize arrays positive and negative and then add the negative numbers to negative and positive numbers to positive respectively.
// then add them to the original array alternatively.
//TC: O(N)
//SC: O(N)


//question: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0, j = 1;
        int maxP = 0;
        int size = prices.size();
        while (j < size){
            if (prices[i] < prices[j]){
                int profit = prices[j] - prices[i];
                maxP = max(maxP, profit);
            }
            else{
                i = j;
            }
            j++;
        }
        return maxP;
    }
};


//Approach:
