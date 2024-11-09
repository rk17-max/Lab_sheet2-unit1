#include <iostream>
#include <vector>
#include "TwoDimensionalArray.cpp"
#include "StringAlgorithms.cpp"

void runTests() {
    // Test 2D Array Operations
    TwoDimensionalArray arr(2, 2);
    std::vector<int> row1 = {1, 2};
    std::vector<int> row2 = {3, 4};

    arr.insertRow(row1);
    arr.insertRow(row2);
    std::cout << "Original Matrix:" << std::endl;
    arr.traverse();

    std::vector<int> col = {5, 6};
    arr.insertColumn(col);
    std::cout << "\nMatrix after column insertion:" << std::endl;
    arr.traverse();

    arr.deleteRow(0);
    std::cout << "\nMatrix after deleting the first row:" << std::endl;
    arr.traverse();

    arr.deleteColumn(0);
    std::cout << "\nMatrix after deleting the first column:" << std::endl;
    arr.traverse();

    // Test Matrix Transpose
    TwoDimensionalArray transposeArr(2, 2);
    transposeArr.insertRow(row1);
    transposeArr.insertRow(row2);
    std::cout << "\nOriginal Matrix:" << std::endl;
    transposeArr.traverse();

    auto transposed = transposeArr.transposeMatrix();
    std::cout << "\nTransposed Matrix:" << std::endl;
    for (const auto& row : transposed) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    // Test String Pattern Matching (KMP Algorithm)
    std::string text = "abxabcabcaby";
    std::string pattern = "abcaby";
    int pos = StringAlgorithms::KMPSearch(text, pattern);
    std::cout << "\nPattern found at position: " << pos << std::endl;

    // Test Run Length Encoding
    std::string str = "aaabbbcccaaa";
    std::string encoded = StringAlgorithms::runLengthEncoding(str);
    std::cout << "RLE Encoded string: " << encoded << std::endl;
}

int main() {
    runTests();
    return 0;
}
