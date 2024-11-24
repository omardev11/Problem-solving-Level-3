

#include <iostream>
using namespace std;
void PrintFibonacciUsingRecurtion(short number,short prev1,short prev2)
{
	
	int fevnumber = 0;
	
	if (number > 0)
	{
		fevnumber = prev1 + prev2;
		prev2 = prev1;
		prev1 = fevnumber;
		cout << fevnumber << "    ";
		PrintFibonacciUsingRecurtion(number - 1, prev1, prev2);

	}
		
		
	
		
			
		
	
}


int main()
{

	PrintFibonacciUsingRecurtion(10,0,1);

}

