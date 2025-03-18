//question: https://leetcode.com/problems/two-sum/description/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        for (int i = 0; i< size - 1; i++){
            for (int j = i + 1; j< size; j++){
                if (nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }
        return {};
    }
};

//Approach: use nested loops and check if sum of certain indexes adds upto target. If yes, print the index else return empty array
//TC: O(N^2)
//SC: O(1)

//question: https://leetcode.com/problems/sort-colors/description/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size = nums.size();
        for (int i = 0; i< size; i++){
            int minIndex = i;
            for (int j = i+1; j< size; j++){
                if(nums[j] < nums[minIndex]){
                    minIndex = j;
                }
            }
            swap(nums[i], nums[minIndex]);
        }
    }
};

//Approach: question is asking us to sort without using in-built sort method so use any sort  algorithm i used selection sort.
//TC: O(N^2)
//SC: O(1)



//question: https://www.geeksforgeeks.org/problems/max-sum-in-sub-arrays0824/0

class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        int size = arr.size();
        int max_score = arr[0] + arr[1];
        for (int i = 0; i< size-1; i++){
            int current = arr[i] + arr[i+1];
            if (current > max_score){
                max_score = current;
            }
        }
        return max_score;
    }
};

//Approach: initialize max_score with element in index 0 and 1 then traverse through the array and if any sum of arr[i] + arr[i + 1] is greater than max_score, update max_score. Finally return max_score.
//TC: O(N)
//SC: O(1)
