
#include <iostream>
#include "functionsLevel3.h";
using namespace Myfunctions;
int main()
{
    srand((unsigned)time(NULL));
    int matrix1[3][3]; int matrix2[3][3]; int SumofMatrix1, SumofMatrix2;
    fillingmatrixwhithrandomnumbers(matrix1, 3, 3);
    cout << " Matrix 1 \n";
    printintinmatrix(matrix1, 3, 3);
    fillingmatrixwhithrandomnumbers(matrix2, 3, 3);
    cout << " Matrix 2 \n";
    printintinmatrix(matrix2, 3, 3);
   
    if (AreTypicalMatrices(matrix1, matrix2, 3, 3))
    {
        cout << "Yes: both Matrices are equal ";
    }
    else
    {
        cout << "NO: both Matrices not are equal ";
    }
}

