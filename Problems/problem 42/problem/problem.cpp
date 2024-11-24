#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector <string> SplitString(string S1, string delim)
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
void replace(string S1)
{
	vector <string> Vstring = SplitString(S1, " ");

	for (string& S : Vstring)
	{
		if (S == "jordan")
		{
			S = "USA";
		}
		cout << S << " ";
	}
}

int main()
{
	string S1 = "Welcome to jordan , jordan is a nice country ";
	cout << "original string " << endl;
	cout << S1;
	cout << endl << "string after replace" << endl;
	replace(S1);
}
