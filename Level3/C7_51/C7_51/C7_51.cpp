#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

const string ClientsFileName = "Clients.txt";

enum enWhatToCount { SmallLetters, CapitalLetters, All };
enum enWhatToTrim { enTrimLeft, enTrimRight, enTrimAll };

struct stBankClientData
{
    string AccountNumber;
    string Pincode;
    string ClientName;
    string PhoneNumber;
    int AccountBalance;
    bool MarkForDelete=false;
};

int ReadPostiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message;
        cin >> Number;
    } while (Number <= 0);

    return Number;

}
string ConvertAllLettersToLowerCase(string Words)
{
    for (int i = 0; i < Words.length(); i++)
    {
        Words[i] = tolower(Words[i]);
    }
    return Words;
}

string ConvertAllLettersToUpperCase(string Words)
{
    for (int i = 0; i < Words.length(); i++)
    {
        Words[i] = toupper(Words[i]);
    }
    return Words;
}
char InvertCharacterCase(char A)
{
    return (isupper(A) ? tolower(A) : toupper(A));
}
string InvertStringCase(string S1)
{
    int stringlength = S1.length();
    for (int i = 0; i < stringlength; i++)
    {
        if (isupper(S1[i]))
        {
            S1[i] = tolower(S1[i]);
        }
        else
        {
            S1[i] = toupper(S1[i]);
        }
    }
    return S1;
}
int GetSmallLetterCountInString(string S1)
{
    int counter = 0;
    for (int i = 0; i < S1.length(); i++)
    {
        if (islower(S1[i]))
        {
            counter++;
        }
    }
    return counter;
}
int GetCapitalLetterCountInString(string S1)
{
    int counter = 0;
    for (int i = 0; i < S1.length(); i++)
    {
        if (isupper(S1[i]))
        {
            counter++;
        }
    }
    return counter;
}
int CountLetters(string S1, enWhatToCount WhatToCount)
{

    if (WhatToCount == enWhatToCount::CapitalLetters)
        return GetCapitalLetterCountInString(S1);
    else if (WhatToCount == enWhatToCount::SmallLetters)
        return GetSmallLetterCountInString(S1);
    else if (WhatToCount == enWhatToCount::All)
        return S1.length();
}
int CountCharInString(string S1, char A, bool MatchCase = true)
{
    int counter = 0;
    for (int i = 0; i < S1.length(); i++)
    {
        if (MatchCase)
        {
            if (S1[i] == A)
                counter++;
        }
        else
        {
            if (tolower(S1[i]) == tolower(A))
                counter++;
        }


    }
    return counter;
}
bool IsVowel(char A)
{
    if (tolower(A) == 'a' || tolower(A) == 'e' || tolower(A) == 'i' || tolower(A) == 'o' || tolower(A) == 'u')
    {
        return true;
    }
    else
    {
        return false;
    }
}
int CountVowelsInString(string S1)
{
    int counter = 0;
    for (int i = 0; i < S1.length(); i++)
    {
        if (IsVowel(S1[i]))
            counter++;
    }
    return counter;
}
void PrintAllVowelsInString(string S1)
{
    cout << "\nVowels in String are : ";
    for (int i = 0; i < S1.length(); i++)
    {
        if (IsVowel(S1[i]))
            cout << S1[i] << "  ";
    }
    cout << endl;
}
char ReadChar(string WordsUser)
{
    char A;
    cout << WordsUser;
    cin >> A;
    return A;
}
void PrintStringWords(string S1)
{
    string delim = " ";//delimiter

    cout << "\nYour string Words are : \n\n";

    short pos = 0;

    string sWord;

    while ((pos = S1.find(delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos);
        if (sWord != "")
        {
            cout << sWord << endl;
        }
        S1.erase(0, pos + delim.length());
    }

    if (S1 != "")
    {
        cout << S1 << endl;
    }
}
int CountStringWords(string S1)
{
    int counter = 0;
    string sWord = "";
    string delim = " ";
    int pos;
    while ((pos = S1.find(delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos);
        if (sWord != "")
        {
            counter++;
        }
        S1.erase(0, pos + delim.length());
    }
    if (S1 != "")
    {
        counter++;
    }
    return counter;
}
vector<string> SplitString(string S1, string Delim = "#//#")
{
    vector <string> vString;
    int pos = 0;
    string sWord;
    while (((pos = S1.find(Delim)) != std::string::npos))
    {
        sWord = S1.substr(0, pos);
        if (sWord != "")
        {
            vString.push_back(sWord);
        }
        S1.erase(0, pos + Delim.length());
    }
    if (S1 != "")
    {
        vString.push_back(S1);
    }
    return vString;
}

void PrintSplitString(vector<string>vString)
{
    for (string& s : vString)
    {
        cout << s << endl;
    }
}

string TrimLeft(string S1)
{
    for (int i = 0; i < S1.length(); i++)
    {
        if (S1[i] != ' ')
        {
            return S1.substr(i, S1.length() - i);
        }
    }
    return "";
}
string TrimRight(string S1)
{
    for (int i = S1.length() - 1; i >= 0; i--)
    {
        if (S1[i] != ' ')
        {
            return S1.substr(0, i + 1);
        }
    }
    return "";
}
string TrimDelim(string S1, enWhatToTrim WhatToTrim)
{
    if (WhatToTrim == enWhatToTrim::enTrimAll)
    {
        return TrimRight(TrimLeft(S1));
    }
    else if (WhatToTrim == enWhatToTrim::enTrimLeft)
    {
        return TrimLeft(S1);
    }
    else if (WhatToTrim == enWhatToTrim::enTrimRight)
    {
        return TrimRight(S1);

    }
    return "";
}
string ReadString(string WordsUser)
{
    string Words;
    cout << WordsUser;
    getline(cin, Words);
    return Words;
}
string JoinString(vector<string> vString, string Delim = " ")
{
    string S1 = "";
    for (string& s : vString)
    {
        S1 = S1 + s + Delim;
    }
    return S1.substr(0, S1.length() - Delim.length());
}
string JoinString(string Array[100], int ArrayLength, string Delim)
{
    string S1 = "";
    for (int i = 0; i < ArrayLength; i++)
    {
        S1 = S1 + Array[i] + Delim;
    }
    return S1.substr(0, S1.length() - Delim.length());
}
string ReverseString(string S1, string Delim)
{
    vector <string>vString, Temp;
    string s = "";
    vString = SplitString(S1, Delim);
    vector<string>::iterator iter = vString.end();
    while (iter != vString.begin())
    {
        iter--;
        s = *iter;
        Temp.push_back(s);
    }
    return JoinString(Temp, Delim);
}
string ReplaceWordsWithMatchCase(string S1, string StringToReplace, string ReplaceTo, bool MatchCase = true, string Delim = " ")
{
    vector<string> vString;
    vString = SplitString(S1, Delim);
    if (MatchCase)
    {
        for (string& s : vString)
        {
            if (s == StringToReplace)
            {
                s = ReplaceTo;
            }
        }
    }
    else
    {
        for (string& s : vString)
        {
            if (ConvertAllLettersToLowerCase(s) == ConvertAllLettersToLowerCase(StringToReplace))
            {
                s = ReplaceTo;
            }
        }
    }
    S1 = JoinString(vString);

    return S1;
}

string RemovePunctuationsFromString(string S1)
{
    string S2 = "";
    for (int i = 0; i < S1.length(); i++)
    {
        if (!(ispunct(S1[i])))
        {
            S2 = S2 + S1[i];
        }
    }
    return S2;
}

string ReplaceWordInStringUsingBuiltInFunction(string S1, string StringToReplace, string ReplaceTo)
{
    int pos = S1.find(StringToReplace);
    while (pos != std::string::npos)
    {
        S1 = S1.replace(pos, StringToReplace.length(), ReplaceTo);
        pos = S1.find(StringToReplace);
    }
    return S1;
}
void LoadDataFromFileToVector(string FileName, vector<string>& vFileContent)
{
    fstream MyFile;
    MyFile.open(FileName, ios::in);//Read Mode

    if (MyFile.is_open())
    {
        string Line;
        while (getline(MyFile, Line))
        {
            vFileContent.push_back(Line);
        }
        MyFile.close();
    }
}
void SaveVectorToFile(string FileName, vector<string>& vFileContent)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out);//Write Mode

    if (MyFile.is_open())
    {
        for (string& Line : vFileContent)
        {
            if (Line != "")
            {
                MyFile << Line << endl;
            }
        }
    }
}
void DeleteRecordFromFile(string FileName, string Record)
{
    vector<string>vFileContent;
    LoadDataFromFileToVector(FileName, vFileContent);
    for (string& Line : vFileContent)
    {
        if (Line == Record)
        {
            Line = "";
        }
    }
    SaveVectorToFile(FileName, vFileContent);
}
void UpdateRecordInFile(string FileName, string Record, string UpdateTo)
{
    vector<string>vFileContent;
    LoadDataFromFileToVector(FileName, vFileContent);
    for (string& Line : vFileContent)
    {
        if (Line == Record)
        {
            Line = UpdateTo;
        }
    }
    SaveVectorToFile(FileName, vFileContent);
}
void PrintFileContent(string FileName)
{
    fstream MyFile;
    MyFile.open(FileName, ios::in);//Read Mode

    if (MyFile.is_open())
    {
        string Line;
        while (getline(MyFile, Line))
        {
            cout << Line << endl;
        }
        MyFile.close();
    }
}
stBankClientData ReadBankClientDataRecord(void)
{
    stBankClientData BankClientData;

    cout << "Enter Account Number : ";
    getline(cin >> ws, BankClientData.AccountNumber);
    BankClientData.Pincode = ReadString("Enter Pin Code : ");
    BankClientData.ClientName = ReadString("Enter Client Name : ");
    BankClientData.PhoneNumber = ReadString("Enter Phone Number : ");
    BankClientData.AccountBalance = ReadPostiveNumber("Enter Account Balance : ");

    return BankClientData;
}
string ConvertRecordToLine(stBankClientData BankClientData, string Separator = "#//#")
{
    string S1;
    S1 += BankClientData.AccountNumber + Separator;
    S1 += BankClientData.Pincode + Separator;
    S1 += BankClientData.ClientName + Separator;
    S1 += BankClientData.PhoneNumber + Separator;
    S1 += to_string(BankClientData.AccountBalance);

    return S1;
}

stBankClientData ConvertLineToRecord(string LineRecord, string separator = "#//#")
{
    stBankClientData BankClientData;
    vector<string>vBankClientData;
    vBankClientData = SplitString(LineRecord, separator);

    BankClientData.AccountNumber = vBankClientData[0];
    BankClientData.Pincode = vBankClientData[1];
    BankClientData.ClientName = vBankClientData[2];
    BankClientData.PhoneNumber = vBankClientData[3];
    BankClientData.AccountBalance = stoi(vBankClientData[4]);

    return BankClientData;

}

void printBankClientRecord(stBankClientData BankClientData)
{
    cout << "Account Number : " << BankClientData.AccountNumber << endl;
    cout << "Pin Code       : " << BankClientData.Pincode << endl;
    cout << "Name           : " << BankClientData.ClientName << endl;
    cout << "Phone          : " << BankClientData.PhoneNumber << endl;
    cout << "Account Balance: " << BankClientData.AccountBalance << endl;
}
void AddDataLineToFile(string FileName, string stDataLine)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out | ios::app);
    if (MyFile.is_open())
    {
        MyFile << stDataLine << endl;

        MyFile.close();
    }
}
void AddNewClient()
{
    stBankClientData BankClientData;
    BankClientData = ReadBankClientDataRecord();

    AddDataLineToFile(ClientsFileName, ConvertRecordToLine(BankClientData));
}
void AddClients(string separator = "#//#")
{
    char addmore = 'Y';
    do
    {
        system("cls");

        cout << "Adding New Client:\n\n";

        AddNewClient();

        cout << "Client Added Successfully, do you want to add more clients? Y/N " << endl;

        cin >> addmore;


    } while (toupper(addmore) == 'Y');

}
vector<stBankClientData> LoadClientsDataFromFile(string FileName)
{
    vector<stBankClientData>vClients;
    fstream MyFile;
    MyFile.open(FileName, ios::in);//Read Mode

    if (MyFile.is_open())
    {
        string Line;
        stBankClientData Client;
        while (getline(MyFile, Line))
        {
            Client = ConvertLineToRecord(Line);
            vClients.push_back(Client);
        }
        MyFile.close();
    }
    return vClients;
}
void PrintClientRecord(stBankClientData Client)
{
    cout << "|" << left << setw(15) << Client.AccountNumber;
    cout << "|" << left << setw(10) << Client.Pincode;
    cout << "|" << left << setw(40) << Client.ClientName;
    cout << "|" << left << setw(12) << Client.PhoneNumber;
    cout << "|" << left << setw(12) << Client.AccountBalance;
}
void PrintAllClientsData(vector<stBankClientData>vClients)
{
    cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ") Client(s)." << endl;
    cout << "________________________________________________________________________________________________" << endl;

    cout << "|" << left << setw(15) << "Account Number";
    cout << "|" << left << setw(10) << "Pin Code";
    cout << "|" << left << setw(40) << "Client Name";
    cout << "|" << left << setw(12) << "phone";
    cout << "|" << left << setw(12) << "Balance";

    cout << "\n________________________________________________________________________________________________" << endl;

    for (stBankClientData Client : vClients)
    {
        PrintClientRecord(Client);
        cout << endl;
    }

    cout << "________________________________________________________________________________________________" << endl;

}

bool FindClientByAccountNumber(vector<stBankClientData> vClient, stBankClientData& Clients, string AccountNumber)
{
    for (stBankClientData& Client : vClient)
    {
        if (Client.AccountNumber == AccountNumber)
        {
            Clients = Client;
            return true;
        }
    }
    return false;
}

string ReadClientAccountNumber()
{
    string AccountNumber = "";
    cout << "\nPlease enter Account Number" << endl;
    cin >> AccountNumber;
    return AccountNumber;
}
bool MarkClientDataForDelete(string AccountNumber, vector<stBankClientData>& vClients)
{
    for (stBankClientData& Client : vClients)
    {
        if (AccountNumber == Client.AccountNumber)
        {
            Client.MarkForDelete = true;
            return true;
        }
    }
    return false;
}
vector<stBankClientData> SaveClientDataToFile(string FileName, vector<stBankClientData> vClients)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out);

    string DataLine;
    if (MyFile.is_open())
    {
        for (stBankClientData& Client : vClients)
        {
            if (Client.MarkForDelete == false)
            {
                DataLine = ConvertRecordToLine(Client);
                MyFile << DataLine << endl;
            }
        }
        MyFile.close();
    }
    return vClients;
}
bool DeleteClientDataFromFile(string AccountNumber, vector<stBankClientData>& vClients)
{
    stBankClientData Client;
    char DeleteAccount = 'n';

    if (FindClientByAccountNumber(vClients, Client, AccountNumber))
    {
        printBankClientRecord(Client);
        cout << "Are you sure to delete this client ?(Y/N)" << endl;
        cin >> DeleteAccount;
        if (toupper(DeleteAccount) == 'Y')
        {
            MarkClientDataForDelete(AccountNumber, vClients);
            SaveClientDataToFile(ClientsFileName, vClients);
            vClients = LoadClientsDataFromFile(ClientsFileName);//refresh
            cout << "\n\nClient Deleted Successfully. " << endl;
            return true;
        }
    }
    else
    {
        cout << "Client with Account Number (" << AccountNumber << ") Not Foound!";
        return false;
    }


}
stBankClientData EditBankClientDataRecord(string AccountNumber)
{  
    stBankClientData Client;
    Client.AccountNumber = AccountNumber;
    cout << "Enter Pin Code : ";
    getline(cin >> ws, Client.Pincode);
    Client.ClientName = ReadString("Enter Client Name : ");
    Client.PhoneNumber = ReadString("Enter Phone Number : ");
    Client.AccountBalance = ReadPostiveNumber("Enter Account Balance : ");  
    return Client;
}
bool UpdateClientByAccountNumber(string AccountNumber, vector<stBankClientData>& vClients)
{
    stBankClientData Client;
    char UpdateClient = 'n';
    
    if (FindClientByAccountNumber(vClients, Client, AccountNumber))
    {
        printBankClientRecord(Client);
        cout << "Are you sure you want update this client? (y/n) ";
        cin >> UpdateClient;
        if (toupper(UpdateClient) == 'Y')
        {
            for (stBankClientData & C : vClients)
            {
                if (C.AccountNumber == AccountNumber)
                {
                    C=EditBankClientDataRecord(AccountNumber);
                    Client = C;
                    break;
                }
                
            }
            SaveClientDataToFile(ClientsFileName, vClients);
            cout << "\n\n";
            printBankClientRecord(Client);
            cout << "\n\nClient Updated Successfully. " << endl;
            return true;
        }
    }
    else
    {
        cout << "Client with Account Number (" << AccountNumber << ") Not Foound!";
        return false;
    }
}
int main()
{
    vector<stBankClientData> vClients = LoadClientsDataFromFile(ClientsFileName);
    string AccountNumber = ReadClientAccountNumber();
    UpdateClientByAccountNumber(AccountNumber, vClients);

    system("pause>0");

    return 0;
}
