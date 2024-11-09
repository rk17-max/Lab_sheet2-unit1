
#include <iostream>

int main() {
    // Test 2D Array Operations
    TwoDimensionalArray arr(2, 2);
    std::vector<int> row1 = {1, 2};
    std::vector<int> row2 = {3, 4};
    
    arr.insertRow(row1);
    arr.insertRow(row2);
    std::cout << "Original Matrix:" << std::endl;
    arr.traverse();
    
    auto transposed = arr.transposeMatrix();
    std::cout << "\nTransposed Matrix:" << std::endl;
    for (const auto& row : transposed) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    // Test String Algorithms
    std::string text = "abxabcabcaby";
    std::string pattern = "abcaby";
    int pos = StringAlgorithms::KMPSearch(text, pattern);
    std::cout << "\nPattern found at position: " << pos << std::endl;

    std::string str = "aaabbbcccaaa";
    std::string encoded = StringAlgorithms::runLengthEncoding(str);
    std::cout << "RLE Encoded string: " << encoded << std::endl;

    return 0;
}
