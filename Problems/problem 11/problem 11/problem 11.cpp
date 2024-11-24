
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
    SumofMatrix1=SumOfAllMatrixs(matrix1, 3, 3);
    SumofMatrix2 = SumOfAllMatrixs(matrix2, 3, 3);
    AreEqualMatrices(SumofMatrix1, SumofMatrix2);

}

