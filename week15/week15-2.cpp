///week15-2.cpp 學習計畫 第5題 找字串是否由 重複的字串所組成的
///LeetCode 459. Repeated Substring Pattern
///ex. abab變成 abab + abab兩倍
///abababab
///bababa 去掉頭尾 問裡面有沒有原本的字串
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s2 = s + s; ///變成兩倍字串
        string s3 = s2.substr(1, s2.length()-2);///去掉頭尾
        return s3.find(s) != string::npos;///在S3裡 找S字串
    }///如果有找到 vs. 如果找不到(會是 string::npos)
    ///!= 不等於 string::nops 找不到(雙重否定)
};
