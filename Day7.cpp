//question: https://leetcode.com/problems/can-place-flowers/description/?envType=problem-list-v2&envId=greedy

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int size = flowerbed.size();
        for(int i = 0; i<size; i++){
            if(flowerbed[i] == 0 && (i == 0 || flowerbed[i-1] == 0) && (i == size-1 || flowerbed[i+1]  == 0)){
                count++;
                i++; //skip the next element
            }
        }
        if(count >= n){
            return true;
        }
        else{
            return false;
        }
    }
};

//Approach: Just do what is said in the question. i.e, the current element should be zero, adjacent elements should be zero or there should be ending and beginning of the vector.If it satisfies all conditions, increment count and skip next element
//TC: O(n)
//SC:O(1)


