#include <string>
#include <iostream>
#include <vector>
#include <fstream>
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
void printLineRecord(Sclient Client)
{
    cout << "\n\nThe following are the client details:\n";
    cout << "\nAccout Number: " << Client.Accountnumber;
    cout << "\nPin Code     : " << Client.pincode;
    cout << "\nName         : " << Client.name;
    cout << "\nPhone        : " << Client.phone;
    cout << "\nAccount Balance: " << Client.accountbalance;
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
bool FindClientByAccountNumber(vector <Sclient> Vclient,string accouontName,Sclient &client)
{
    for (Sclient& C : Vclient)
    {
        
        if (C.Accountnumber == accouontName)
        {
            client=C;
            return true;
        }
       

    }
    return false;
       
    
    
}
void PrintClient(vector <Sclient> Vclient, string accouontName)
{
    Sclient client;
    if (FindClientByAccountNumber(Vclient, accouontName,client))
    {
        printLineRecord(client);
      
    }
    else
    {
        cout << "Client whith account number (" << accouontName << ") NOT found " << endl;
    }


}



int main()
{
    vector <Sclient> Vclient = LoadClientDataFromFile(); string accountNumber;
    Sclient client;
    cout << "enter your account number \n";
    cin >> accountNumber;
    PrintClient(Vclient, accountNumber);
   
    

    

  

}


