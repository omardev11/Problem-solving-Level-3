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
	void MultiplyMatirix(int Matrix1[3][3], int Matrix2[3][3], int Matrixresult[3][3], short row, short colo)
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < colo; j++)
			{
				Matrixresult[i][j] = Matrix1[i][j] * Matrix2[i][j];
			}
			cout << endl;
		}
	}
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
	int SumOfAllMatrixs(int arr[3][3], short row, short colo)
	{
		int sum = 0;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < colo; j++)
			{
				sum += arr[i][j];
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
	void AreEqualMatrices(int sumofmatrix1, int sumofmatrix2)
	{
		if (sumofmatrix1 == sumofmatrix2)
		{
			cout << " Yes: Matrices are equel. ";
		}
		else
		{
			cout << " NO: Matrices are not equel. ";
		}
	}
	bool AreTypicalMatrices(int Matrix1[3][3], int Matrix2[3][3], short row, short colo)
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < colo; j++)
			{
				if (Matrix1[i][j] != Matrix2[i][j])
				{
					return false;
				}


			}
		}
		return true;
	}
	bool IsIdentifyMatrix(int Matrix[3][3], short row, short colo)
	{

		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < colo; j++)
			{
				if (i == j && Matrix[i][j] != 1)
				{
					return false;
				}
				else if (i != j && Matrix[i][j] != 0)
				{
					return false;
				}
			}
		}
		return true;
	}
	bool IsScalarMatrix(int Matrix[3][3], short row, short colo) {
		int FirstDigitElement = Matrix[0][0];
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < colo; j++) {
				if (i == j && Matrix[i][j] != FirstDigitElement) {
					return false;
				}
				else if (i != j && Matrix[i][j] != 0) {
					return false;
				}
			}
		}
		return true;
	}
	int countNumberInMatrix(int Matrix[3][3], short row, short colo, short Number)
	{
		int count = 0;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < colo; j++)
			{
				if (Matrix[i][j] == Number)
				{
					count++;
				}
			}
		}
		return count;
	}
	bool IsSparseNumberInMatrix(int Matrix[3][3], short row, short colo)
	{
		int count = 0; int zerodigit = 0;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < colo; j++)
			{
				if (Matrix[i][j] == zerodigit)
				{
					count++;
				}
			}
		}
		if (count > 4)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool IsNumberinMatrix(int Matrix[3][3], short row, short colo, int Number)
	{


		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < colo; j++)
			{
				if (Matrix[i][j] == Number)
				{
					return true;
				}
			}
		}
		return false;
	}
	void PrintIntersectedNumbers(int matrix1[3][3], int matrix2[3][3], short row, short colo)
	{
		int Number;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < colo; j++)
			{
				Number= matrix1[i][j];
				if (IsNumberinMatrix(matrix2, 3, 3, Number))
				{
					cout << Number << "    ";
				}
			}
		    
			
		}
			
		

		
	}




}