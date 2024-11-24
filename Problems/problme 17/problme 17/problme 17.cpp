
#include <iostream>
#include "functionsLevel3.h"
using namespace Myfunctions;
int main()
{
    int matrix1[3][3] = { {8,0,0},{0,8,0},{0,0,8} }; int Number;
    cout << " Matrix 1 \n";
    printintinmatrix(matrix1, 3, 3);

    cout << "\n enter the number to look for in Matrix? \n";
    cin >> Number;
    
    if (IsNumberinMatrix(matrix1, 3, 3, Number))
    {
        cout << "Yes: its there ";
    }
    else
    {
        cout << "NO: its not there ";
    }
}