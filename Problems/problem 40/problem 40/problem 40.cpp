#include<string>
#include<iostream>
#include<vector>
using namespace std;

string JoinString(vector<string> vString, string Delim)

{
    string S1 = "";
    for (string& s : vString)
    {
        S1 = S1 + s + Delim;
    }
    return S1.substr(0, S1.length() - Delim.length());
}
string joinString(string arr[], string delim, int length)
{
    string S1;
    for (int i = 0; i < length; i++)
    {
        S1 = S1 + arr[i] + delim;
    }
    return S1.substr(0, S1.length() - delim.length());
}
int main()
{
    string arr[] = { "omar","mohamed","omar" };
    vector<string> vString = { "Mohammed","Faid","Ali","Maher" };

    cout << "\nVector after join: \n";
    cout << JoinString(vString, " ") << endl << endl;

    cout << "\nVector after join: \n";
    cout << joinString(arr, " ", 3);
    

    system("pause>0");
}