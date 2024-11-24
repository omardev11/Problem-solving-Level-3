#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
using namespace std;
struct Sclient { string Accountnumber; string pincode; string name; string phone; double accountbalance; };
Sclient ReadNewClient()
{
    Sclient Client;     
    cout << "Enter Account Number? ";     
    getline(cin >> ws, Client.Accountnumber);     
    cout << "Enter PinCode? ";     
    getline(cin, Client.pincode);     
    cout << "Enter Name? ";     
    getline(cin, Client.name);     
    cout << "Enter Phone? ";     
    getline(cin, Client.phone);     
    cout << "Enter AccountBalance? ";     
    cin >> Client.accountbalance; 
    return Client; 
} 
string convertRecordToLine(Sclient client, string seperate)
{
    string StClientRecord = "";
    StClientRecord += client.Accountnumber + seperate;
    StClientRecord += client.pincode + seperate;
    StClientRecord += client.name + seperate;
    StClientRecord += client.phone + seperate;
    StClientRecord += to_string(client.accountbalance);
    return StClientRecord;
}
vector <string> AddClient()
{
    Sclient client;
    string clientNumber;
    vector <string> Vfile;
    char answer;
    do
    {
        system("cls");
        cout << "\n adding new client " << endl;
        client = ReadNewClient();
        clientNumber = convertRecordToLine(client, "#//#");
        
        Vfile.push_back(clientNumber);
         
        cout << "\nClient added succesfully, do you want to add more client if yes 'y if no click 'n " << endl;
        cin >> answer;
    } while (answer == 'y');
    return Vfile;
    
}
void AddDataToFile(vector <string> Vfile)
{

    fstream Myfile;
    Myfile.open("client.txt", ios::out | ios::app);

    if (Myfile.is_open())
    {
        for (string& s : Vfile)
        {
            Myfile << s << endl;
        }
        Myfile.close();
    }
}


int main()
{
    vector <string> Vfile;     fstream Myfile;
    Vfile= AddClient();
    AddDataToFile(Vfile);


   

}


