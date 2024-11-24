
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
string InvertingAllLetters(string S1)
{
	for (int i = 0; i < S1.length(); i++)
	{
		if (isupper(S1[i]))
		{
			S1[i] = tolower(S1[i]);
		}
		else if (islower(S1[i]))
		{
			S1[i] = toupper(S1[i]);
		}

	}
	cout << "\n\nString after upper \n";
	return S1;

}
int main()
{
	string S1 = ReadString();
	cout << InvertingAllLetters(S1);

}

