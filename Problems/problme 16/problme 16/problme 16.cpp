
#include <iostream>
#include "functionsLevel3.h"
using namespace Myfunctions;
int main()
{
    int matrix1[3][3] = { {8,9,5},{0,8,0},{0,0,8} }; 
    cout << " Matrix 1 \n";
    printintinmatrix(matrix1, 3, 3);

 
    if (IsSparseNumberInMatrix(matrix1, 3, 3))
    {
        cout << "Yes: its sparse " << endl;
    }
    else
    {
        cout << "No: its not sparse " << endl;
    }
}