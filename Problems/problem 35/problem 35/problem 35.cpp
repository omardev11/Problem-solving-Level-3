
#include <iostream>
#include <string>
using namespace std;
char Readchar()
{
	char S1;
	cout << "enter your char ?" << endl;
	cin >> S1;
	return S1;
}
string ReadString()
{
	string S1;
	cout << "enter your string ?" << endl;
	getline(cin, S1);
	return S1;
}
void PrintStringWords(string S1)
{
	int counter = 0;
	cout << "Your string words are: \n";
	for (int i = 0; i < S1.length(); i++)
	{
			if (S1[i] != ' ')
			{
				cout << S1[i];
			}
			else
			{
				cout << endl;
			}
		

	}
}

int main()
{
	string S1 = ReadString();
	PrintStringWords(S1);
	cout << endl;


}

