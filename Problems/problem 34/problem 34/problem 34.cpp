
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
bool IsVOwel(char C1)
{
	if (C1 == 97 || C1 == 101 || C1 == 105 || C1 == 111 || C1 == 117 || C1 == 65 || C1 == 69 || C1 == 73 || C1 == 79 || C1 == 85)
	{
		return true;
	}
	else
		return false;
}
void PrintAllVowels(string S1)
{
	int counter = 0;
	cout << "Vowesl in string are:  "; 
	for (int i = 0; i < S1.length(); i++)
	{
		if (IsVOwel(S1[i]))
		{
			cout << " " << S1[i] << " ";
		}

	}
}

int main()
{
	string S1 = ReadString();
	PrintAllVowels(S1);
	cout << endl;


}

