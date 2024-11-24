
#include <iostream>
#include <string>
using namespace std;
string ReadString()
{
	string S1;
	cout << "enter your string ?" << endl;
	getline(cin, S1);
	return S1;
}
short CountCapitalLetter(string S1)
{
	int capital = 0;
	for (int i = 0; i < S1.length(); i++)
	{
		if (isupper(S1[i]))
		{
			capital++;
		}
	}
	return capital;
}
short CountSmallLetter(string S1)
{
	int small = 0;
	for (int i = 0; i < S1.length(); i++)
	{
		if (islower(S1[i]))
		{
			small++;
		}
	}
	return small;
}
int main()
{
	string S1 = ReadString();
	cout << endl << "string length = " << S1.length() << endl;
	cout << "\nCapital Letter count =  " << CountCapitalLetter(S1) << endl;;
	cout << "Small letters count =  " << CountSmallLetter(S1) << endl;

}

