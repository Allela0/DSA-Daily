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




//question: https://www.geeksforgeeks.org/problems/reverse-bits3556/1?page=1&category=Mathematical&difficulty=Easy&sortBy=submissions

class Solution {
  public:
    long long reversedBits(long long x) {
        int arr[32] = {0};
        long long decimal = 0;
        int i = 0;
        while ( x > 0 && i < 32){
            arr[i] = x%2 ;
            x /= 2;
            i++;
        }
        for (int i = 0; i < 32; i++){
            int j = 31 - i;
            decimal = decimal + (arr[i] * pow(2,j));
        }
        return decimal;
    }
};

//Approach: initialize an array with 32 0's and then change the elements of the array to the binary representation of the given digit by using modulo operator
//(note that we don't have to reverse the binary representation as the output requires decimal of reversed binary so reversing twice doesnt make sense.)
//now iterate through the elements starting from 0th position and convert it to decimal representation.

//TC: O(1)
//SC: O(1)
