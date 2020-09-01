#include <iostream>
using namespace std;

void printMatrix(int matrix[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j];
            if ( j != cols - 1)
                cout << " ";
            if ( (j == cols - 1) && (i != rows - 1))
                cout << '\n';

        }
    }
}

int main ()
{
    int i = 3;
    int j = 3;
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printMatrix(matrix, i, j);

    return 0;
}
