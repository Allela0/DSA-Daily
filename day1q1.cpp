// question: https://leetcode.com/problems/ugly-number/?envType=problem-list-v2&envId=math

class Solution
{
public:
    bool isUgly(int n)
    {
        if (n <= 0)
        {
            return false;
        }
        while (n % 2 == 0)
        {
            n /= 2;
        }
        while (n % 3 == 0)
        {
            n /= 3;
        }
        while (n % 5 == 0)
        {
            n /= 5;
        }
        if (n == 1)
        {
            return true;
        }
        return false;
    }
};


//Approach: check if the number if devisible by 2, 3 or 5 if yes, repeatedly divide it by whichever number it is divisible by until its 1 or cannot be divided further
//TC: O(logn)
//SC: O(1)
