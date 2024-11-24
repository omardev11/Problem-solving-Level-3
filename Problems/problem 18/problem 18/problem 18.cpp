
#include <iostream>
#include "functionsLevel3.h"
using namespace Myfunctions;
int main()
{
    int matrix1[3][3] = { {8,0,20},{4,3,9},{5,2,82} };
    int matrix2[3][3] = { {3,4,3},{1,23,8},{54,32,14} };
    cout << " Matrix 1 \n";
    printintinmatrix(matrix1, 3, 3);
    cout << endl << "Matrix 2" << endl;
    printintinmatrix(matrix2, 3, 3);
    cout << endl << "Intersected numbers " << endl;
    PrintIntersectedNumbers(matrix1, matrix2, 3, 3);
}