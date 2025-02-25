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