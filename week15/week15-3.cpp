///week15-3.cpp 厩策璸礶Math程肈(程螟)
///LeetCode 50.Pow(x, n) т x  n Ωよ
///螟: (1)n 琌n0Ωよ(﹚琌1)
///(2) n 狦琌璽 璶跑Θ(-x)  (-nΩよ)
///(3) n 伐 獶盽10^9硂或
class Solution {
public:///笿 n 琌程璽 -2147483648 穦岿  -n 穦禬筁 int
    double myPow(double x,  long long int n) {///ぃノint эΘ( 眔俱计)
        if(n==0) return 1;///砏玥(1)
        if(n<0) return myPow(1/x, -n);///砏玥(2)ㄧΑ㊣ㄧΑ
        double half = myPow(x, n/2);///砏玥(3)  Ωよ
        if(n%2==0) return half * half;///案计  * 
        else return half * half * x;
    }
};
