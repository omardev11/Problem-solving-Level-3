

#include <iostream>
using namespace std;
void PrintFibonacciUsingLoop(short number)
{
	 int prev1 = 1, prev2 = 1;
	 int fevnumber=1;
	for (int i = 0; i < number; i++)
	{
		if (i <= 1)
		{
			cout << prev1 << "    ";
		}
		else
		{
			fevnumber = prev1 + prev2;
			cout << fevnumber << "    ";
			prev2 = prev1;
			prev1 = fevnumber;
		}
	}
}


int main()
{

	PrintFibonacciUsingLoop(10);
  
}

