
#include <iostream>
#include <string>
#include <vector>
using namespace std;
string ReadString()
{
	string S1;
	cout << "enter your string ?" << endl;
	getline(cin, S1);
	return S1;
}
string TrimLeft(string S1)
{

	for (int i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ')
		{
			return S1.substr(i, S1.length() - 1);
		}
	}
	
	return "";
}
string TrimRigh(string S1)
{

	for (int i = S1.length(); i > 0; i--)
	{
		if (S1[i] != ' ')
		{
			return S1.substr(0, i + 1);
		}
	}

	return "";
}
string Trim(string S1)
{
	return TrimRigh(TrimLeft(S1));
}

int main()
{
	string S1 = ReadString();
	cout << " Trim left = " << TrimLeft(S1) << endl;
	cout << " Trim right = " << TrimRigh(S1) << endl;
	cout << " Trim  = " << Trim(S1) << endl;



}

