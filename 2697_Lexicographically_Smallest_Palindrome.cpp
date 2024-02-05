class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int front = 0, back = s.size()-1;
        while(front <= s.size()/2){
            s[front] = min(s[front],s[back]);
            s[back] = s[front];
            front++; back--;
        }
        return s;
    }
};
