#include <iostream>
using namespace std;

/* Remember:
row 3 = row 1;
col 3 = col 2;
*/

void PrintMultiplyMatrix(int matrix1[][3], int row1, int col1,
             int matrix2[][3], int row2, int col2,
             int matrix3[][3])
{
    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < col2; j++)
        {
            matrix3[i][j] = 0;
            for(int k = 0; k < col1; k++)
            {
                matrix3[i][j] = matrix3[i][j] + matrix1[i][k] * matrix2[k][j];
            }

        }
    }

    // print result
    for (int i = 0; i < row1; i++)
    {
        for(int j = 0; j < col2; j++)
        {
            cout << matrix3[i][j];
            if (j != col2 - 1)
                cout << " ";
        }
         if (i != row1 - 1)
            cout << '\n';
    }
}

int main ()
{
    int row1 = 3;
    int col1 = 3;
    int row2 = 3;
    int col2 = 3;
    int matrix1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int matrix2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int matrix3[3][3];
    PrintMultiplyMatrix(matrix1, row1, col1, matrix2, row2, col2,  matrix3);


    return 0;
}
