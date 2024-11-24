#include <string>
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
struct Sclient { string Accountnumber; string pincode; string name; string phone; double accountbalance; };
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
        Vstring.push_back(S1);
    }
    return Vstring;


}
Sclient convertLineToRecord(string StclientRecord,string seperate)
{
    vector <string> S2; Sclient client;
    S2 = SplitString(StclientRecord, seperate);
    
    
    client.Accountnumber = S2[0];
    client.pincode = S2[1];
    client.name = S2[2];
    client.phone = S2[3];
    client.accountbalance = stod(S2[4]);
    return client;

    

}
void printLineRecord(Sclient Client)
{
    cout << "\n\nThe following is the extracted client record:\n";     
    cout << "\nAccout Number: " << Client.Accountnumber;     
    cout << "\nPin Code     : " << Client.pincode;     
    cout << "\nName         : " << Client.name;     
    cout << "\nPhone        : " << Client.phone;     
    cout << "\nAccount Balance: " << Client.accountbalance;
}


int main()
{
    Sclient client;
    string stLine = "A150#//#1234#//#Mohammed Abu-Hadhoud#//#079999#//#5270.000000";

    cout << "client line to record \n\n";
    client = convertLineToRecord(stLine, "#//#");
    printLineRecord(client);

}


