
#include <iostream>
#include <vector>

class TwoDimensionalArray {
private:
    std::vector<std::vector<int>> matrix;
    int rows;
    int cols;

public:
    TwoDimensionalArray(int r, int c) : rows(r), cols(c) {
        matrix.resize(rows, std::vector<int>(cols, 0));
    }

    // Row-wise insertion
    void insertRow(const std::vector<int>& row) {
        if (row.size() == cols) {
            matrix.push_back(row);
            rows++;
        } else {
            std::cout << "Invalid row size" << std::endl;
        }
    }

    // Column-wise insertion
    void insertColumn(const std::vector<int>& col) {
        if (col.size() == rows) {
            for (int i = 0; i < rows; i++) {
                matrix[i].push_back(col[i]);
            }
            cols++;
        } else {
            std::cout << "Invalid column size" << std::endl;
        }
    }

    // Delete row
    void deleteRow(int rowIndex) {
        if (rowIndex >= 0 && rowIndex < rows) {
            matrix.erase(matrix.begin() + rowIndex);
            rows--;
        }
    }

    // Delete column
    void deleteColumn(int colIndex) {
        if (colIndex >= 0 && colIndex < cols) {
            for (auto& row : matrix) {
                row.erase(row.begin() + colIndex);
            }
            cols--;
        }
    }

    // Matrix transpose
    std::vector<std::vector<int>> transposeMatrix() {
        std::vector<std::vector<int>> result(cols, std::vector<int>(rows));
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result[j][i] = matrix[i][j];
            }
        }
        return result;
    }

    // Traverse
    void traverse() {
        for (const auto& row : matrix) {
            for (int val : row) {
                std::cout << val << " ";
            }
            std::cout << std::endl;
        }
    }
};
