#include <iostream>
using namespace std;
int main() {
    
    int rows, columns;

    
    cout << "Enter the number of rows (maximum 3): ";// prompt user to enter rows
    cin >> rows;
    if (rows > 3) {
        cout << "Error: Maximum number of rows exceeded." << endl;
        return 1;
    }

    cout << "Enter the number of columns (maximum 3): ";// prompt user to enter columns
    cin >> columns;
    if (columns > 3) {
        cout << "Error: Maximum number of columns exceeded." << endl;
        return 1;
    }

    
    double **array = new double*[rows];// dynamically 2D array
    for (int i = 0; i < rows; ++i) {
        array[i] = new double[columns];
    }

    // Prompt the user to enter values for each element of the array
    cout << "Enter values for each element of the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << "Enter element values of array (" << i << ", " << j << "): ";
            cin >> array[i][j];
        }
    }

    // Output the values of each element of the array
    cout << "Values of each element of the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // Free the dynamically allocated memory
    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
