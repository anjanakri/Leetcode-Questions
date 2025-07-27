class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return 0;
        }
        long num=x, rev=0; //taking long as datatype because int as datatype is raising Overflow issue.
        while(num!=0){
            rev=rev*10+num%10;
            num=num/10;
        }
        if(x==rev){
            return 1;
        }else{
            return 0;
        }
    }
};
