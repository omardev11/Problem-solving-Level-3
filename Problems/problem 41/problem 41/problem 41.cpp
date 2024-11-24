#include <iostream>
#include <string>
#include <vector>
using namespace std;
string ReadString()
{
    string S1;
    cout << "Please enter your string? " << endl;
    cin >> S1;
    return S1;
}
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
string reverseString(string S1)
{
	vector <string> Vstring = SplitString(S1," ");
	string S2 = "";

	vector <string>::iterator iter = Vstring.end();
	while (iter != Vstring.begin())
	{
		--iter;
		S2 += *iter + " ";
	}
	S2 = S2.substr(0, S2.length() - 1);
	return S2;
   
}
int main()
{
	string S1 =  "omar mohamed ali yahye ";
    cout << "string after reversion words " << endl;
    cout << reverseString(S1);

	system("pause>0");
}

