#pragma once
#include <iostream>
#include <iomanip>
using namespace std;
namespace Myfunctions
{
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
	int SumOfAllMatrixs(int arr[3][3], short row, short colo)
	{
		int sum = 0;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < colo; j++)
			{
				sum+= arr[i][j];
			}
		}
		return  sum;
	}
	void TranspoteMatrix(int arr[3][3], int Transpote[3][3], short row, short colo)
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < colo; j++)
			{
				Transpote[j][i] = arr[i][j];
			}
		}
	}

}


