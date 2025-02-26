// question: https://leetcode.com/problems/concatenation-of-array/description/

class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        int size = nums.size();
        vector<int> ans(size * 2);
        for (int i = 0; i < size; i++)
        {
            ans[i] = nums[i];
        }
        for (int i = 0; i < size; i++)
        {
            ans[size + i] = nums[i];
        }
        return ans;
    }
};

// Approach: initialize a vector with double with size of nums then add the numbers in nums to ans through a for loop twice
//TC: O(n)
//SC: O(n)





// question: https://leetcode.com/problems/contains-duplicate/description/

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                return true;
            }
        }
        return false;
    }
};


//Approach: sort the vector nums and then check if the neighbouring elements are equal or not
//TC: O(nlogn)
//SC: O(logn)
