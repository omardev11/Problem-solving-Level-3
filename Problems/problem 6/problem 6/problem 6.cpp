#include <iostream>
#include <iomanip>
using namespace std;
void fillingmatrixwhithordernumbers(int arr[3][3], short row, short colo)
{
	int orderNumbers = 1;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colo; j++)
		{
			arr[i][j] = orderNumbers;
			orderNumbers++;
		}
	}
}
void printintinmatrix(int arr[3][3], short row, short colo)
{
	int array1[3];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colo; j++)
		{
			cout << setw(3) << arr[i][j] << "     ";
		}
		cout << endl;
	}

}

int main()
{
	int arr[3][3];
	fillingmatrixwhithordernumbers(arr, 3, 3);
	cout << "\n the following is 3x3 order matrix \n";
	printintinmatrix(arr, 3, 3);


}