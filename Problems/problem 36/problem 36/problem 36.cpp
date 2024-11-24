
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
void countWords(string S1)
{
	string delim = " "; short pos = 0; string sword; short counter = 0;
	while ((pos = S1.find(delim)) != string::npos)
	{
		sword = S1.substr(0, pos);
		if (sword != "")
		{
			counter++;
		}
		S1.erase(0, pos + delim.length());
	}
	if (S1 != "")
	{
		counter++;
	}
	cout << "The Numbers of words in your string is " << counter << endl;

	
	
}

int main()
{
	string S1 = ReadString();
	countWords(S1);
	cout << endl;


}

