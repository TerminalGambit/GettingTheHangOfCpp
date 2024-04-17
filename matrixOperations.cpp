// the objective of this file is to self-teach how to code in C++ 
// the approach is very simple, I will code a few matrix operations

#include <iostream> // this is the standard library for input/output
#include <vector> // this is the standard library for vectors
#include <string> // this is the standard library for strings

using namespace std; // this is the standard namespace
// we use the namespace std to avoid writing std::cout, std::cin, std::endl, etc.

// first question is how to declare a matrix in C++
// we can use a vector of vectors
// we could also use a different approach, we can create a struct for the matrix
// we can also use a class for the matrix
// we can also use a template for the matrix

// what is a template?
// a template is a way to create a generic class or function

// we will be doing all the different approaches

// first, we will use a vector of vectors
// we will create a function to create a matrix

vector<vector<int>> createMatrix(int rows, int cols) { // this function creates a matrix with the specified number of rows and columns
    vector<vector<int>> matrix(rows, vector<int>(cols, 0)); // this creates a matrix with all elements equal to 0
    return matrix; // this returns the matrix
}

// we will create a function to print the matrix

void printMatrix(vector<vector<int>> matrix) { // this function prints the matrix
    for (int i = 0; i < matrix.size(); i++) { // this loops through the rows
        for (int j = 0; j < matrix[i].size(); j++) { // this loops through the columns
            cout << matrix[i][j] << " "; // this prints the element
        }
        cout << endl; // this prints a new line
    }
}

// we will create a function to add two matrices

vector<vector<int>> addMatrices(vector<vector<int>> matrix1, vector<vector<int>> matrix2) { // this function adds two matrices
    vector<vector<int>> result(matrix1.size(), vector<int>(matrix1[0].size(), 0)); // this creates a matrix with all elements equal to 0
    for (int i = 0; i < matrix1.size(); i++) { // this loops through the rows
        for (int j = 0; j < matrix1[i].size(); j++) { // this loops through the columns
            result[i][j] = matrix1[i][j] + matrix2[i][j]; // this adds the elements
        }
    }
    return result; // this returns the result
}

// we will create a function to subtract two matrices

vector<vector<int>> subtractMatrices(vector<vector<int>> matrix1, vector<vector<int>> matrix2) { // this function subtracts two matrices
    vector<vector<int>> result(matrix1.size(), vector<int>(matrix1[0].size(), 0)); // this creates a matrix with all elements equal to 0
    for (int i = 0; i < matrix1.size(); i++) { // this loops through the rows
        for (int j = 0; j < matrix1[i].size(); j++) { // this loops through the columns
            result[i][j] = matrix1[i][j] - matrix2[i][j]; // this subtracts the elements
        }
    }
    return result; // this returns the result
}

// we will create the mainVector function

int mainVector() { // this is the main function
    vector<vector<int>> matrix1 = createMatrix(2, 2); // this creates the first matrix
    matrix1[0][0] = 1; // this sets the element
    matrix1[0][1] = 2; // this sets the element
    matrix1[1][0] = 3; // this sets the element
    matrix1[1][1] = 4; // this sets the element
    vector<vector<int>> matrix2 = createMatrix(2, 2); // this creates the second matrix
    matrix2[0][0] = 5; // this sets the element
    matrix2[0][1] = 6; // this sets the element
    matrix2[1][0] = 7; // this sets the element
    matrix2[1][1] = 8; // this sets the element
    cout << "Matrix 1:" << endl; // this prints a message
    printMatrix(matrix1); // this prints the first matrix
    cout << "Matrix 2:" << endl; // this prints a message
    printMatrix(matrix2); // this prints the second matrix
    cout << "Result of adding the matrices:" << endl; // this prints a message
    vector<vector<int>> result = addMatrices(matrix1, matrix2); // this adds the matrices
    printMatrix(result); // this prints the result
    cout << "Result of subtracting the matrices:" << endl; // this prints a message
    result = subtractMatrices(matrix1, matrix2); // this subtracts the matrices
    printMatrix(result); // this prints the result
    return 0; // this returns 0
}

int main() { // this is the main function
    mainVector(); // this calls the mainVector function
    return 0; // this returns 0
}
