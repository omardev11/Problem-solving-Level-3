
#include <iostream>
#include <iomanip>
using namespace std;
int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
};
int rowsum(int arr[3][3], short rownumber, short colo)
{
	int sum = 0;
	for (int i = 0; i < colo; i++)
	{
		sum += arr[rownumber][i];
	}
	return sum;

}
void printsumeachrow(int arr[3][3], short row, short colo, int arrsum[3])
{
	cout << "    the following are the sum of each row in matrix   " << endl;

	for (short i = 0; i < row; i++)
	{
		cout << "row " << i + 1 << " sum is = " << rowsum(arr, i, colo) << endl;
	}
	
}
void printSumRowInArray(int arr[3][3], short row, short colo, int arrsum[3])
{
	for (int i = 0; i < row; i++)
	{
		cout << "   \n\nsum row in array     " << endl;
		cout << arrsum[i] << endl;
	}
}
void SumMatixRowsInArry(int arr[3][3], int arrSum[3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		arrSum[i] = rowsum(arr, i, Cols);
	}
}
void fillingmatrixwhithrandomnumbers(int arr[3][3], short row, short colo)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colo; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
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
	srand((unsigned)time(NULL));
	int arr[3][3];
	int arrsum[3];
	fillingmatrixwhithrandomnumbers(arr, 3, 3);
	cout << "    the following is 3x3 random matrix    " << endl;

	printintinmatrix(arr, 3, 3);
	printsumeachrow(arr, 3, 3, arrsum);
	SumMatixRowsInArry(arr, arrsum, 3, 3);
	printSumRowInArray(arr, 3, 3, arrsum);
}

