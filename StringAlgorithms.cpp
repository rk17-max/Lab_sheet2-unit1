
#include <string>
#include <vector>

class StringAlgorithms {
public:
    // KMP Pattern Matching
    static int KMPSearch(const std::string& text, const std::string& pattern) {
        int n = text.length();
        int m = pattern.length();
        std::vector<int> lps = computeLPSArray(pattern);
        
        int i = 0, j = 0;
        while (i < n) {
            if (pattern[j] == text[i]) {
                i++;
                j++;
            }
            if (j == m) {
                return i - j;
            }
            else if (i < n && pattern[j] != text[i]) {
                if (j != 0) {
                    j = lps[j - 1];
                }
                else {
                    i++;
                }
            }
        }
        return -1;
    }

    // Run Length Encoding
    static std::string runLengthEncoding(const std::string& str) {
        std::string result;
        int count = 1;
        
        for (int i = 1; i <= str.length(); i++) {
            if (i == str.length() || str[i] != str[i-1]) {
                result += std::to_string(count) + str[i-1];
                count = 1;
            }
            else {
                count++;
            }
        }
        return result;
    }

private:
    static std::vector<int> computeLPSArray(const std::string& pattern) {
        int m = pattern.length();
        std::vector<int> lps(m, 0);
        int len = 0;
        int i = 1;
        
        while (i < m) {
            if (pattern[i] == pattern[len]) {
                len++;
                lps[i] = len;
                i++;
            }
            else {
                if (len != 0) {
                    len = lps[len - 1];
                }
                else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return lps;
    }
};
