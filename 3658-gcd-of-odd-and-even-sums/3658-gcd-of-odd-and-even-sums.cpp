class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumodd = 0, sumeven = 0, i, x = 1, y = 2;

        for (i = 1; i <= n; i++) {
            sumodd = sumodd + x;
            sumeven = sumeven + y;
            x += 2;
            y += 2;
        }

        return gcd(sumodd, sumeven);

        // OTHER APPORACH WITHOUT BUILT IN FUCNTION
        // int result;
        // for (i = 1; i <= min(sumodd, sumeven); i++) {

        //     if (sumodd % i == 0 && sumeven % i == 0) {
        //         result = i;
        //     }
        // }

        // return result;
    }
};