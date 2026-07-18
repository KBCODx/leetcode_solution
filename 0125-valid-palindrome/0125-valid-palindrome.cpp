class Solution {
public:

    bool check(int i,const string& a, int n){
bool b;

    if (i >=n ) {
        return true;
    }

    if (a[i] == a[n]) {
        b = check(i + 1, a, n - 1);
        return b;
    }

    else {
        return false;

    }
    }
    
    
    
    
    bool isPalindrome(string s) {
        string result="";

        int l , newl;
        l=s.length();
        for (int i=0;i<l;i++){
            char c=s[i];

            if(isalnum(c)){
                result+=tolower(c);
            }
        }
        newl=result.length();
        return check(0,result,newl-1);
        


    }
};