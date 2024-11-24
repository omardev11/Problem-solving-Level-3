
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
string AToa(string S1)
{
	bool isfristLetter = true;
	for (int i = 0; i < S1.length(); i++)
	{

		if (S1.at(i) != ' ' && isfristLetter)
		{
			S1[i] = tolower(S1[i]);

		}
		isfristLetter = (S1[i] == ' ' ? true : false);
	}
	cout << "\n\nString after conversion \n";
	return S1;
}
int main()
{
	cout << AToa(ReadString());
}

