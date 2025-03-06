//question : https://leetcode.com/problems/distribute-money-to-maximum-children/?envType=problem-list-v2&envId=math

class Solution {
public:
    int distMoney(int money, int children) {
        if (money < children){ //violates the condition that every child should get at least 1 dollar return -1 instanly
          return -1;
        }
        money -= children;// make sure that each child gets 1 dollar
        int count = min(money / 7, children); /*maximize the amount of children getting 8 dollars. Either the remaining money should be enough or the children should not be exceeded we take 7 because 1 has already been distributed*/
        money -= count * 7;// update money and children accordingly
        children -= count;
        if (children == 1 && money == 3 || children == 0 && money != 0) { // checks the condition that no one should receive 4 and all the money must be distributed.
            count--;//decrement that number of children that gets 8
        }
        return count;
    }
};
/*Approach: Distributes 1 dollar to each child and then maximises the amount of children that can get 8 and then compares it with the amount of children present and takes the minimum of both the numbers.
then update money and children accordingly and checks for the condition that no one should have 4 and all money must be distributed. If found, count is reduced by 1*/
//TC: O(1)
//SC: O(1)
