
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
void printFristLetterOfEachWord(string S1)
{
	bool isfristLetter = true;
	for (int i = 0; i < S1.length(); i++)
	{
		if (S1.at(i) != ' ' && isfristLetter)
		{
			cout << S1[i] << endl;
		}
		isfristLetter = (S1[i] == ' ' ? true : false);
	}
}
int main()
{
	printFristLetterOfEachWord(ReadString());
}

