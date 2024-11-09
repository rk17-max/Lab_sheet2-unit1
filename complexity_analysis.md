
# Complexity Analysis Report

## 1. Multi-dimensional Array Operations

### Time Complexity:
- Row Insertion: O(1)
- Column Insertion: O(n) where n is number of rows
- Row Deletion: O(n) where n is number of rows
- Column Deletion: O(m*n) where m is rows and n is columns
- Matrix Transpose: O(m*n)

### Space Complexity:
- Matrix Storage: O(m*n)
- Transpose Operation: O(m*n)

## 2. String Algorithms

### Knuth-Morris-Pratt Algorithm
- Time Complexity: O(n + m) where n is text length and m is pattern length
- Space Complexity: O(m) for LPS array

### Run Length Encoding
- Time Complexity: O(n)
- Space Complexity: O(n)

## Best, Average, and Worst Cases

### KMP Algorithm
- Best Case: O(n) when first characters don't match
- Average Case: O(n + m)
- Worst Case: O(n + m)

### RLE Compression
- Best Case: O(n) when all characters are different
- Average Case: O(n)
- Worst Case: O(n) when all characters are same
