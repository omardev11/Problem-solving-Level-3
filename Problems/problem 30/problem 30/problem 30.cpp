
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

short CountLetter(string S1,char C1)
{
	int counter = 0;
	for (int i = 0; i < S1.length(); i++)
	{
		if (S1[i]==C1)
		{
			counter++;
		}
	}
	return counter;
}
int main()
{
	string S1 = ReadString();
	char C1 = Readchar();
	cout << "Letter " << C1 << " count = " << CountLetter(S1, C1);

}

