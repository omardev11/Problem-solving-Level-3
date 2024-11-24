
#include <iostream>
#include "functionsLevel3.h"
using namespace Myfunctions;
int main()
{
    int matrix1[3][3] = { {8,0,0},{0,8,0},{0,0,8} };
    cout << " Matrix 1 \n";
    printintinmatrix(matrix1, 3, 3);
    if (IsScalarMatrix(matrix1, 3, 3))
        cout << "Yes: matrices are scalar ";
    else
        cout << "NO: matrices are not scalar ";
}