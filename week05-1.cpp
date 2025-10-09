//Week05-1
//LeetCode 學習計畫 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); //把字串變成之前教過的 cin iostream
        string word ; //字串的word
        //ss >> word; //很像之前教過的cin >> word
        //cout << "讀到了" << word << "\n"; //測試用
        //ss >> word;
        //cout << "讀到了" << word << "\n";
        while( ss >> word ){ //一直讀進來
            //裡面什麼都沒做
        }
        return word.length(); //最後的字的長度//return 0; //隨便
    }
};
