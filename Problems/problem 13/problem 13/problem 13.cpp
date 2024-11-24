
#include <iostream>
#include "functionsLevel3.h";
using namespace Myfunctions;
int main()
{
    srand((unsigned)time(NULL));
    int matrix1[3][3] = { {1,0,0},{0,1,0},{0,0,1} };
    cout << " Matrix 1 \n";
    printintinmatrix(matrix1, 3, 3);
    if (IsIdentifyMatrix(matrix1, 3, 3))
        cout << "Yes: matrices are identify ";
    else 
        cout << "NO: matrices are not identify ";
}