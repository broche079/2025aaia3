//week03-2.cpp  璶糶ㄢΩ(糶Ч, 秨み, 虏虫, 礛)
//LeetCode 厩策璸礶8肈 1822. Sign of the Product of an Array
//р皚癬ㄓ, 琌タ计璽计 ,临琌0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; //0ヴ计, 常穦跑Θ0, Τ1程,或跑或
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0) ans *= +1;
            if(nums[i]<0) ans *= -1;
            if(nums[i]==0) ans *= 0;
        }
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};s
