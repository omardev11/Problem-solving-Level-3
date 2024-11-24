#include <string>
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
struct Sclient { string Accountnumber; string pincode; string name; string phone; double accountbalance; };
Sclient ReadNewClient()
{
    Sclient client;
    cout << "enter your account number =";
    cin >> client.Accountnumber;
    cout << "\n enter your pincode = ";
    cin >> client.pincode;
    cout << "\n enter your name = ";
    cin >> client.name;
    cout << "\n enter your phone = ";
    cin >> client.phone;
    cout << "\n enter your account balance = ";
    cin >> client.accountbalance;
    return client;
    
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


int main()
{
    Sclient client;
    cout << "Please enter client date\n\n\n ";
    client = ReadNewClient();
    cout << "client record for saving is\n\n ";
    cout << convertRecordToLine(client,"#\\#");
        
}


