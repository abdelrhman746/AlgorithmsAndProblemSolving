#include <iostream>
#include <cmath>
using namespace std;

string Readtext(void)
{   
    string Text="";
    
    cout<<"please enter A Text"<<endl;
    getline(cin,Text);

    return Text;
}
string EncryptText(string Text,short EncryptionKey)
{
   for(int i=0;i<=Text.length();i++)
   {
        Text[i]=char((int)Text[i]+EncryptionKey);
   }
   return Text;
}
string DecryptText(string Text,short EncryptionKey)
{
   for(int i=0;i<=Text.length();i++)
   {
        Text[i]=char((int)Text[i]-EncryptionKey);
   }
   return Text;
}
void PrintText(string Text)
{
    short EncryptionKey=2;
    string TextAfterEncryption=EncryptText(Text,EncryptionKey);
    string TextAfterDecryption=DecryptText(TextAfterEncryption,EncryptionKey);
    cout<<"Text Before Encryption :"<<Text<<endl;
    cout<<"Text After  Encryption :"<<TextAfterEncryption<<endl;
    cout<<"Text After  Decryption :"<<TextAfterDecryption<<endl;
}
int main ()
{
    PrintText(Readtext());
    return 0;
}