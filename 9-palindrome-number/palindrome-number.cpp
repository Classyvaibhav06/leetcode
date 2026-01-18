class Solution {
public:
    bool isPalindrome(int x) {
        double n = 0;
        int y =x;
        while(y>0){
            n=n*10+y%10;
            y/=10;
        }
        if(x==n){
            return true;
        }
        else{
             return false;
        }

    }
};