
#include <iostream>
#include "functionsLevel3.h"
using namespace Myfunctions;
using namespace std;
void Myfunctions::fillingmatrixwhithrandomnumbers(int arr[3][3], short row, short colo);
void Myfunctions::printintinmatrix(int arr[3][3], short row, short colo);
int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    fillingmatrixwhithrandomnumbers(arr, 3, 3);
    cout << "Matrix 1\n";
    printintinmatrix(arr, 3, 3);
    cout << "\n sum of matrix is:    "<< SumOfAllMatrixs(arr, 3, 3);
    
}


