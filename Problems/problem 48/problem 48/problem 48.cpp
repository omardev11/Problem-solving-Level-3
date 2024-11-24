#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;
const string ClientsFileName = "client.txt";
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
Sclient convertLineToRecord(string StclientRecord, string seperate)
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
vector <Sclient> LoadClientDataFromFile(string filename = ClientsFileName)
{
    fstream Myfile;
    vector <Sclient> Vclient;
    Myfile.open(filename, ios::in);
    if (Myfile.is_open())
    {
        Sclient client;
        string line;

        while (getline(Myfile, line))
        {
            client = convertLineToRecord(line, "#//#");
            Vclient.push_back(client);
            
        }
        Myfile.close();
    }
    return Vclient;
    

   
}
void PrintClientRecord(Sclient client)
{
    cout << "| " << left << setw(15) << client.Accountnumber;
    cout << "| " << left << setw(10) << client.pincode;
    cout << "| " << left << setw(40) << client.name;
    cout << "| " << left << setw(30) << client.phone;
    cout << "| " << left << setw(15) << client.accountbalance;
    


}
void PrintClientsList(vector <Sclient> Vclient)
{
    
    cout  << "\n\t\t\t\t\t\t\t\tClient list (" << Vclient.size() << ")   Client(s)\n\n";
    cout << "----------------------------------------------------------------------------";
    cout << "--------------------------------------------\n\n";
    cout << "| " << left << setw(15) << "Account number ";
    cout << "| " << left << setw(10) << "Pin code ";
    cout << "| " << left << setw(40) << "Client name ";
    cout << "| " << left << setw(30) << "phone ";
    cout << "| " << left << setw(15) << "Account balance ";
    cout << "\n---------------------------------------------------------------------------";
    cout << "--------------------------------------------\n\n";

    for (Sclient& client : Vclient)
    {
        PrintClientRecord(client);
        cout << endl;
    }
    cout << "\n-------------------------------------------------------------------------";
    cout << "-----------------------------------------------\n\n";


}

int main()
{
    vector <Sclient> Vclient;
    Vclient = LoadClientDataFromFile();
    PrintClientsList(Vclient);



}


