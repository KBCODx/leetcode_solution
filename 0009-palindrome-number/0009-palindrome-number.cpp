class Solution {
public:
    bool isPalindrome(int x) {
if (x<0){
    return false;
}
        int last,copy=x;
        long long reversedigit=0;

        while(x!=0){
         last=x%10;
         reversedigit=(reversedigit*10)+last;
         x=x/10;
         }

if(copy == reversedigit){
    return true;
}

      else{
          return false;

      }

    }
};