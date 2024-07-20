#include <iostream>
#include <cmath>
using namespace std;

string ReadPassword(void)
{   
    string Password="";
    
    cout<<"please enter A Password form 3 letters"<<endl;
    cin>>Password;

    return Password;
}
bool GuessPassword(string Password)
{
    string Word="";
    string Pass="";
    int Temp=0;
    int counter=1;
    for(int i=65;i<=90;i++)
    {
        for(int j=65;j<=90;j++)
        {
            for(int k=65;k<=90;k++)
            {
                Word+=char(i);
                Word+=char(j);
                Word+=char(k);
                cout<<"Trial["<<counter<<"]:"<<Word<<endl;
                if(Password==Word)
                {
                   Temp=counter;
                   Pass=Word;
                   cout<<endl<<"Password is "<<Pass<<endl;
                   cout<<"Found after "<<Temp<<" Trial(s)"<<endl;
                   return true;
                }
                counter++;
                Word="";
            }
        }
    }
    
}
int main ()
{
    GuessPassword(ReadPassword());
    return 0;
}