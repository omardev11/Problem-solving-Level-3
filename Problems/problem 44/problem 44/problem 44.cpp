#include <string>
#include <iostream>
using namespace std;

string RemovePunction(string S1)
{
    string S2;
    for (int i = 0; i < S1.length(); i++)
    {
        if (!ispunct(S1[i]))
        {
            S2+=S1[i];
        }
    }
    S2 = S2 + " ";

    return S2;
}

int main()
{
    string S1 = "Welcome to jordan, jordan is a nice, country: it's Amazaing ";
    cout << "Orgina strig \n" << S1 << endl;
    cout << "After removed puction " << endl;
    cout << RemovePunction(S1);
    
}

