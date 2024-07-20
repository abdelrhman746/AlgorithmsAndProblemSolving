#include <iostream>
#include <cmath>
using namespace std;
enum enValidInValid{Valid,InValid};
struct stInfo
{
    int UserPassword;
    int UserBalance=7500;
};
int ReadPostiveNumber(string Message)
{
    int Number;
   
    cout << Message << endl;
    cin >> Number;
   
    return Number;
}

enValidInValid GetUserInfo(void)
{
    stInfo Info;
    do
    {
        Info.UserPassword = ReadPostiveNumber("Please enter your  User Password ");
        if (Info.UserPassword == 123456)
        {
            return enValidInValid::Valid;
        }
        else
        {
            cout << "\nWorng PIN\n";
            system("color 4F");
        }
    } while (!(Info.UserPassword == 123456));
  
}

void PrintValidInValidPassword(enValidInValid ValidInValid)
{
    stInfo Info;
    if (ValidInValid == enValidInValid::Valid)
    {
        system("color 2F");
        cout << "Your Balance is "<< Info.UserBalance << endl;
    }
   
}

int main()
{
    PrintValidInValidPassword(GetUserInfo());
}