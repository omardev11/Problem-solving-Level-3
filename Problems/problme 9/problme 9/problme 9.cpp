
#include <iostream>
#include <iomanip>

using namespace std;
int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
};
void fillingmatrixwhithrandomnumbers(int Matrix[3][3], short row, short colo)
{

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colo; j++)
		{
			Matrix[i][j] = RandomNumber(1, 10);
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
void printMatrixInOneRow(int arr[3][3], short row, short colo)
{
	
	for (int i = 1; i <= row; i++)
	{
		for (int j = 0; j < colo; j++)
		{
			cout << setw(3) << arr[i][j] << "     ";
		}
		cout << endl;
	}
}
void printMatrixInOneColo(int arr[3][3], short row, short colo)
{

	for (int j = 1; j <= row; j++)
	{
		for (int i = 0; i < colo; i++)
		{
			cout << setw(3) << arr[i][j] << "     ";
		}
		cout << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int Matrix2[3][3]; int Matrix1[3][3]; int Matrixresult[3][3];
	fillingmatrixwhithrandomnumbers(Matrix1, 3, 3);
	cout << "  MATRIX 1 \n";
	printintinmatrix(Matrix1, 3, 3);
	cout << "\    Midlde row of matrix is\n   ";
	printMatrixInOneRow(Matrix1, 1, 3);
	cout << "\    Midlde colo of matrix is\n   ";
	printMatrixInOneColo(Matrix1, 1, 3);





}

