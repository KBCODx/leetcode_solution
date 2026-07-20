class Solution {
public:
int result (int n){
if(n<=1){
        return n;
      }  
       
    return result(n-1)+ result(n-2);

}
    int fib(int n) {
      
     
    return result(n);
    }
};