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
        int i = 0;//buy
        int j = 1;//sell
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


/*Approach: Intialize two pointers i and j where i is the buying price and j is the selling price while j is still within bounds, calculate the profit and then
update maxP if the calculated profit is greater than the initially assigned profit else update i with j as we found a lower price than out current buy day
and increment j always*/
//TC: O(N)
//SC: O(1)
