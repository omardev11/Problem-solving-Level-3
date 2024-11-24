
#include <iostream>
#include "functionsLevel3.h"
using namespace Myfunctions;
int main()
{
    int matrix1[3][3] = { {3,4,3},{1,23,8},{54,32,14} };
    cout << " Matrix 1 \n";
    printintinmatrix(matrix1, 3, 3);
   
    cout << "Minium NUmber is \n " << MiniumNumberInMatrix(matrix1, 3, 3) << endl;
    cout << "Maxium Number is \n" << MaxiumNumberInMatrix(matrix1, 3, 3) << endl;
}