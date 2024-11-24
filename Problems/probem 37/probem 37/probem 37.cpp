
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
vector <string> SplitString(string S1,string delim)
{
	 short pos = 0; string sword; 
	 vector <string> Vstring;
	while ((pos = S1.find(delim)) != string::npos)
	{
		sword = S1.substr(0, pos);
		if (sword != "")
		{
			Vstring.push_back(sword);
		}
		S1.erase(0, pos + delim.length());
	}
	if (S1 != "")
	{
		Vstring.push_back(sword);
	}
	return Vstring;


}

int main()
{
	string S1 = ReadString();
	vector <string> Vstring = SplitString(S1, " ");
	cout << "Tokens = " << Vstring.size() << endl;
	for (string &S : Vstring)
	{
		cout << S << endl;
	}


}

