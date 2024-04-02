class Solution {
public:
    int maxVowels(string s, int k) {
        int first = 0, second = 0, len = 0, count = 0, ans = 0;
        while (second < k) {
            if (s[second] == 'a' || s[second] == 'e' || s[second] == 'i' ||
                s[second] == 'o' || s[second] == 'u') {
                count++;
            }
            second++;
            len = second - first;
        }
        ans = count;
        while (second < s.size()) {
            if (s[first] == 'a' || s[first] == 'e' || s[first] == 'i' ||
                s[first] == 'o' || s[first] == 'u') {
                count--;
            }
            first++;
            if (s[second] == 'a' || s[second] == 'e' || s[second] == 'i' ||
                s[second] == 'o' || s[second] == 'u') {
                count++;
            }
            second++;
            ans = max(ans, count);
        }
        return ans;
    }
};