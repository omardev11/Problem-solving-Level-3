
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
bool IsVOwel(char C1)
{
	if (C1 == 97 || C1 == 101 || C1 == 105 || C1 == 111 || C1 == 117 || C1 == 65 || C1 == 69 || C1 == 73 || C1 == 79 || C1 == 85)
	{
		return true;
	}
	else
		return false;
}

int main()
{
	char C1 = Readchar();
	if (IsVOwel(C1))
		cout << "Yes: letter '" << C1 << "' is vowel" << endl;
	else
		cout << "NO: Letter '" << C1 << "' is not vowel" << endl;
}


