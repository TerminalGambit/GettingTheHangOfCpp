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

vector<vector<int>> createVectorMatrix(int rows, int cols) { // this function creates a matrix with the specified number of rows and columns
    vector<vector<int>> matrix(rows, vector<int>(cols, 0)); // this creates a matrix with all elements equal to 0
    return matrix; // this returns the matrix
}

// we will create a function to print the matrix

void printVectorMatrix(vector<vector<int>> matrix) { // this function prints the matrix
    for (int i = 0; i < matrix.size(); i++) { // this loops through the rows
        for (int j = 0; j < matrix[i].size(); j++) { // this loops through the columns
            cout << matrix[i][j] << " "; // this prints the element
        }
        cout << endl; // this prints a new line
    }
}

// we will create a function to add two matrices

vector<vector<int>> addVectorMatrices(vector<vector<int>> matrix1, vector<vector<int>> matrix2) { // this function adds two matrices
    vector<vector<int>> result(matrix1.size(), vector<int>(matrix1[0].size(), 0)); // this creates a matrix with all elements equal to 0
    for (int i = 0; i < matrix1.size(); i++) { // this loops through the rows
        for (int j = 0; j < matrix1[i].size(); j++) { // this loops through the columns
            result[i][j] = matrix1[i][j] + matrix2[i][j]; // this adds the elements
        }
    }
    return result; // this returns the result
}

// we will create a function to subtract two matrices

vector<vector<int>> subtractVectorMatrices(vector<vector<int>> matrix1, vector<vector<int>> matrix2) { // this function subtracts two matrices
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
    vector<vector<int>> matrix1 = createVectorMatrix(2, 2); // this creates the first matrix
    matrix1[0][0] = 1; // this sets the element
    matrix1[0][1] = 2; // this sets the element
    matrix1[1][0] = 3; // this sets the element
    matrix1[1][1] = 4; // this sets the element
    vector<vector<int>> matrix2 = createVectorMatrix(2, 2); // this creates the second matrix
    matrix2[0][0] = 5; // this sets the element
    matrix2[0][1] = 6; // this sets the element
    matrix2[1][0] = 7; // this sets the element
    matrix2[1][1] = 8; // this sets the element
    cout << "Matrix 1:" << endl; // this prints a message
    printVectorMatrix(matrix1); // this prints the first matrix
    cout << "Matrix 2:" << endl; // this prints a message
    printVectorMatrix(matrix2); // this prints the second matrix
    cout << "Result of adding the matrices:" << endl; // this prints a message
    vector<vector<int>> result = addVectorMatrices(matrix1, matrix2); // this adds the matrices
    printVectorMatrix(result); // this prints the result
    cout << "Result of subtracting the matrices:" << endl; // this prints a message
    result = subtractVectorMatrices(matrix1, matrix2); // this subtracts the matrices
    printVectorMatrix(result); // this prints the result
    return 0; // this returns 0
}

// we will create a struct for the matrix

struct Matrix { // this is the matrix struct
    // let's suppose that we have a matrix with integers
    // using something other than vectors
    int rows; // this is the number of rows
    int cols; // this is the number of columns
    int **matrix; // this is the matrix
};


// we will create a function to create a matrix

Matrix createStructMatrix(int rows, int cols) { // this function creates a matrix with the specified number of rows and columns
    Matrix matrix; // this creates a matrix
    matrix.rows = rows; // this sets the number of rows
    matrix.cols = cols; // this sets the number of columns
    matrix.matrix = new int*[rows]; // this creates an array of pointers
    for (int i = 0; i < rows; i++) { // this loops through the rows
        matrix.matrix[i] = new int[cols]; // this creates an array
        for (int j = 0; j < cols; j++) { // this loops through the columns
            matrix.matrix[i][j] = 0; // this sets the element
        }
    }
    return matrix; // this returns the matrix
}

// we will create a function to print the matrix

void printStructMatrix(Matrix matrix) { // this function prints the matrix
    for (int i = 0; i < matrix.rows; i++) { // this loops through the rows
        for (int j = 0; j < matrix.cols; j++) { // this loops through the columns
            cout << matrix.matrix[i][j] << " "; // this prints the element
        }
        cout << endl; // this prints a new line
    }
}

// we will create a function to add two matrices

Matrix addStructMatrices(Matrix matrix1, Matrix matrix2) { // this function adds two matrices
    Matrix result = createStructMatrix(matrix1.rows, matrix1.cols); // this creates a matrix with all elements equal to 0
    for (int i = 0; i < matrix1.rows; i++) { // this loops through the rows
        for (int j = 0; j < matrix1.cols; j++) { // this loops through the columns
            result.matrix[i][j] = matrix1.matrix[i][j] + matrix2.matrix[i][j]; // this adds the elements
        }
    }
    return result; // this returns the result
}

// we will create a function to subtract two matrices

Matrix subtractStructMatrices(Matrix matrix1, Matrix matrix2) { // this function subtracts two matrices
    Matrix result = createStructMatrix(matrix1.rows, matrix1.cols); // this creates a matrix with all elements equal to 0
    for (int i = 0; i < matrix1.rows; i++) { // this loops through the rows
        for (int j = 0; j < matrix1.cols; j++) { // this loops through the columns
            result.matrix[i][j] = matrix1.matrix[i][j] - matrix2.matrix[i][j]; // this subtracts the elements
        }
    }
    return result; // this returns the result
}

// we will create the mainStruct function

int mainStruct() { // this is the main function
    Matrix matrix1 = createStructMatrix(2, 2); // this creates the first matrix
    matrix1.matrix[0][0] = 1; // this sets the element
    matrix1.matrix[0][1] = 2; // this sets the element
    matrix1.matrix[1][0] = 3; // this sets the element
    matrix1.matrix[1][1] = 4; // this sets the element
    Matrix matrix2 = createStructMatrix(2, 2); // this creates the second matrix
    matrix2.matrix[0][0] = 5; // this sets the element
    matrix2.matrix[0][1] = 6; // this sets the element
    matrix2.matrix[1][0] = 7; // this sets the element
    matrix2.matrix[1][1] = 8; // this sets the element
    cout << "Matrix 1:" << endl; // this prints a message
    printStructMatrix(matrix1); // this prints the first matrix
    cout << "Matrix 2:" << endl; // this prints a message
    printStructMatrix(matrix2); // this prints the second matrix
    cout << "Result of adding the matrices:" << endl; // this prints a message
    Matrix result = addStructMatrices(matrix1, matrix2); // this adds the matrices
    printStructMatrix(result); // this prints the result
    cout << "Result of subtracting the matrices:" << endl; // this prints a message
    result = subtractStructMatrices(matrix1, matrix2); // this subtracts the matrices
    printStructMatrix(result); // this prints the result
    return 0; // this returns 0
}

int main() { // this is the main function
    cout << "Output of vector matrix operations:" << endl;
    mainVector(); // this calls the mainVector function
    cout << endl << "Output of struct matrix operations:" << endl;
    mainStruct(); // this calls the mainStruct function
    return 0; // this returns 0
}
