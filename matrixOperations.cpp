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