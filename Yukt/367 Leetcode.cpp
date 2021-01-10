//https://leetcode.com/problems/valid-perfect-square/
//Day 4

class Solution {
public:
    bool isPerfectSquare(int num) {
        long s=0 , e=num;
        while(s<=e){

            long mid = (s+e)/2;

            if((mid*mid)==num){
                return true;;
            }
            else if((mid*mid)>num){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return false;
    }
};
