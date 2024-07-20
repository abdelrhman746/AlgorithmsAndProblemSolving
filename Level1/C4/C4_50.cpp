#include <iostream>
#include <cmath>
using namespace std;
enum enValidInValid { Valid, InValid };
struct stInfo
{
    int UserPassword;
    int UserBalance = 7500;
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
    int counter = 3;
    do
    {
        counter--;
        Info.UserPassword = ReadPostiveNumber("Please enter your  User Password ");
        if (Info.UserPassword == 123456)
        {
            return enValidInValid::Valid;
        }
        else
        {
            cout << "\nWorng PIN,  you have " << counter << endl;
            system("color 4F");
        }
    } while (!(Info.UserPassword == 123456)&&counter>=1);
    return enValidInValid::InValid;
}

void PrintValidInValidPassword(enValidInValid ValidInValid)
{
    stInfo Info;
    if (ValidInValid == enValidInValid::Valid)
    {
        system("color 2F");
        cout << "Your Balance is " << Info.UserBalance << endl;
    }
    else
    {
        cout << " Your Card is Blocked call the bank for help " << endl;
    }

}

int main()
{
    PrintValidInValidPassword(GetUserInfo());
}