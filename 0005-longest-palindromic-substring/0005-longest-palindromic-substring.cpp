class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if (n <= 1) return s;

        int start = 0;   // सबसे लंबे पैलिंड्रोम की शुरुआती इंडेक्स
        int maxLen = 0;  // सबसे लंबे पैलिंड्रोम की लंबाई

        // लैम्ब्डा फ़ंक्शन (Lambda Function) केंद्र से बाहर चेक करने के लिए
        auto expand = [&](int left, int right) {
            while (left >= 0 && right < n && s[left] == s[right]) {
                left--;
                right++;
            }
            // लूप खत्म होने पर पैलिंड्रोम की लंबाई निकालना
            int len = right - left - 1;
            if (len > maxLen) {
                maxLen = len;
                start = left + 1;
            }
        };

        for (int i = 0; i < n; i++) {
            expand(i, i);     // 1. विषम लंबाई (Odd length) जैसे "aba" के लिए (केंद्र 'b')
            expand(i, i + 1); // 2. सम लंबाई (Even length) जैसे "abba" के लिए (केंद्र 'bb')
        }

        return s.substr(start, maxLen);
    }
};
