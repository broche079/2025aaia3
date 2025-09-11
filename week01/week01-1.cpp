// Leetcode 28Find the Index of the First Occurrence in a String
// 在Haystack 乾稻草堆裡找到針(大海撈針)
// haystack: sabutsad
// needle:   sad
//            sad
//             sad
//                  sad 

class Solution {
public:
    int strStr(string haystack, string needle) {
        int H = haystack.length(), N = needle.length();//字串的長度
        for(int i=0; i<= H-N; i++){ //9減3等於6
            // .subsrt(開始, 結束)部分的意思
            if(haystack.substr(i, N) == needle ) return i; //找到答案
        }
        return -1;
    }
};