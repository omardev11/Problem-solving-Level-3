#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
using namespace std;
const string ClientsFileName = "clients.txt";
struct Sclient
{
    string Accountnumber;
    string pincode;
    string name;
    string phone;
    double Accountbalance = 0.0;
    bool Marktodelete = false;
};
vector <string> SplitString(string S1, string delim)
{
    int pos = 0; string sword;
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
    client.Accountbalance = stod(S2[4]);
    return client;



}
string convertRecordToLine(Sclient client, string seperate)
{
    string StClientRecord = "";
    StClientRecord += client.Accountnumber + seperate;
    StClientRecord += client.pincode + seperate;
    StClientRecord += client.name + seperate;
    StClientRecord += client.phone + seperate;
    StClientRecord += to_string(client.Accountbalance);
    return StClientRecord;
}
void printLineRecord(Sclient Client)
{
    cout << "\n\nThe following are the client details:\n";
    cout << "\nAccout Number: " << Client.Accountnumber;
    cout << "\nPin Code     : " << Client.pincode;
    cout << "\nName         : " << Client.name;
    cout << "\nPhone        : " << Client.phone;
    cout << "\nAccount Balance: " << Client.Accountbalance;
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
bool FindClientByAccountNumber(vector <Sclient>& Vclient, string accouontName, Sclient& client)
{
    for (Sclient& C : Vclient)
    {

        if (C.Accountnumber == accouontName)
        {
            client = C;
            return true;
        }


    }
    return false;



}
bool UpdateClienDataFromFileByAccountNumber(vector <Sclient>& Vclient, string accountname, string filename = ClientsFileName)
{
    Vclient = LoadClientDataFromFile();
    for (Sclient& C : Vclient)
    {
        if (C.Accountnumber == accountname)
        {
            cin.ignore();
            cout << "enter name? "; getline(cin,C.name) ;
            cout << "enter pin code? "; getline(cin, C.pincode);
            cout << "enter phone? "; getline(cin, C.phone);
            cout << "enter account balance? "; cin >> C.Accountbalance;
          
            return true;
        }
    }
    return false;
}
void SaveClientsDataTofile(vector <Sclient> Vclient, string filename = ClientsFileName)
{
    fstream Myfile;
    string Dataline;
    Myfile.open(filename, ios::out);

    if (Myfile.is_open())
    {
        for (Sclient& C : Vclient)
        {
            
            
                Dataline = convertRecordToLine(C, "#//#");
                Myfile << Dataline << endl;
            
        }
        Myfile.close();
    }


}
bool UpdateClientByAccountNumber(vector <Sclient> Vclient, string accouontName)
{
    Sclient client; char answer;
    if (FindClientByAccountNumber(Vclient, accouontName, client))
    {
        printLineRecord(client);
        cout << "\nAre you sure you want to update this client if yes click 'y' if no click 'n'\n";
        cin >> answer;
        if (answer == 'y')
        {
            UpdateClienDataFromFileByAccountNumber(Vclient, accouontName);
            SaveClientsDataTofile(Vclient);

            return true;
            cout << "\nclient update succesfully\n ";
        }
        Vclient = LoadClientDataFromFile();

    }
    else
    {
        cout << "Client whith account number (" << accouontName << ") NOT found " << endl;
    }
    return false;


}




int main()
{
    vector <Sclient> Vclient = LoadClientDataFromFile(); string accountNumber;
    Sclient client;
    cout << "enter your account number \n";
    cin >> accountNumber;
    cout << UpdateClientByAccountNumber(Vclient, accountNumber);







}


