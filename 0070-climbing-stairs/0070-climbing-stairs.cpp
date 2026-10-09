class Solution {
public:
    int climbStairs(int n) {

        // if(n==0 || n==1){
        //     return 1;
        // }

        // // This question is based on the Tiling Problem
        // // Vericle 
        // int ans1 = climbStairs(n-1); // n-1 space remamber

        // // Horizontal
        // int ans2 = climbStairs(n-2); // n-2 space remamber

        // return ans1 + ans2;

        int a = 1;
        int b = 1;

        for(int i=2; i<=n; i++){
            int ans = a+b;
            a = b;
            b = ans;
        }
        return b;
        
    }
};