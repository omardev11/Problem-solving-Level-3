
#include <iostream>
#include <cstdlib>
using namespace std; 
int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
};

void randommatrix()
{
	cout << "    the following is 3x3 random matrix    " << endl;
	cout << RandomNumber(1, 100) << "     " << RandomNumber(1, 100) << "     " << RandomNumber(1, 100) << endl;
	cout << RandomNumber(1, 100) << "     " << RandomNumber(1, 100) << "     " << RandomNumber(1, 100) << endl;
	cout << RandomNumber(1, 100) << "     " << RandomNumber(1, 100) << "     " << RandomNumber(1, 100) << endl;
}
int main()
{	
		//Seeds the random number generator in C++, called only once
		srand((unsigned)time(NULL)); 
		
		randommatrix();
}
