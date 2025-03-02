#include <iostream>
#include <vector>

using Matrix = std::vector<std::vector<int>>;

Matrix addMatrices(const Matrix &a, const Matrix &b) {
    int rows = a.size();
    int cols = a[0].size();
    Matrix result(rows, std::vector<int>(cols));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    return result;
}

Matrix subtractMatrices(const Matrix &a, const Matrix &b) {
    int rows = a.size();
    int cols = a[0].size();
    Matrix result(rows, std::vector<int>(cols));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }

    return result;
}

Matrix multiplyMatrices(const Matrix &a, const Matrix &b) {
    int rows = a.size();
    int cols = b[0].size();
    int commonDim = a[0].size();
    Matrix result(rows, std::vector<int>(cols, 0));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            for (int k = 0; k < commonDim; ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    return result;
}

void printMatrix(const Matrix &matrix) {
    for (const auto &row : matrix) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    Matrix a = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    Matrix b = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    std::cout << "Matrix A:" << std::endl;
    printMatrix(a);

    std::cout << "Matrix B:" << std::endl;
    printMatrix(b);

    Matrix sum = addMatrices(a, b);
    std::cout << "Sum of A and B:" << std::endl;
    printMatrix(sum);

    Matrix difference = subtractMatrices(a, b);
    std::cout << "Difference of A and B:" << std::endl;
    printMatrix(difference);

    Matrix product = multiplyMatrices(a, b);
    std::cout << "Product of A and B:" << std::endl;
    printMatrix(product);

    return 0;
}