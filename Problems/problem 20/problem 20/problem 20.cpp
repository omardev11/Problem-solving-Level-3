
#include <iostream>
#include "functionsLevel3.h"
using namespace Myfunctions;
int main()
{
    int matrix1[3][3] = { {1,4,1},{8,23,8},{14,32,14} };
    cout << " Matrix 1 \n";
    printintinmatrix(matrix1, 3, 3);
    cout << endl;
    if (IspalindromeMatrix(matrix1, 3, 3))
    {
        cout << "yes: Matrix is palindrome  ";
    }
    else
    {
        cout << "NO: matrix is not palindrome  ";
    }



   

}