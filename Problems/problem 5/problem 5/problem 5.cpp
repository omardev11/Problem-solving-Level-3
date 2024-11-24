#include <iostream>
#include <iomanip>
using namespace std;
int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
};
int colosum(int arr[3][3], short row, short colonumber)
{
	int sum = 0;
	for (int i = 0; i < row; i++)
	{
		sum += arr[i][colonumber];
	}
	return sum;

}
void printsumeachcolo(int arr[3][3], short row, short colo)
{
	cout << "    the following are the sum of each row in matrix   " << endl;

	for (short i = 0; i < colo; i++)
	{
		cout << "colo " << i + 1 << " sum is = " << colosum(arr, row, i) << endl;
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
void SumMatixColoInArry(int arr[3][3], int arrSum[3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		arrSum[i] = colosum(arr, Rows, i);
	}
}
void printSumColoInArray(int arr[3][3], short row, short colo, int arrsum[3])
{
	for (int i = 0; i < row; i++)
	{
		cout << "   \n\nsum colo in array     " << endl;
		cout << arrsum[i] << endl;
	}
}


int main()
{
	srand((unsigned)time(NULL));
	int arr[3][3]; int arrsum[3];
	fillingmatrixwhithrandomnumbers(arr, 3, 3);
	cout << "    the following is 3x3 random matrix    " << endl;
	printintinmatrix(arr, 3, 3);
	printsumeachcolo(arr, 3, 3);
	SumMatixColoInArry(arr, arrsum, 3, 3);
	printSumColoInArray(arr, 3, 3, arrsum);



}

