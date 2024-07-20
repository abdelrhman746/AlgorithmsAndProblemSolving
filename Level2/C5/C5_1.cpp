#include <iostream>
using namespace std;
void PrintTableHeader(void)
{
    cout<<"\t\t\tMultiplication Table From 1 To 10"<<endl;
    cout<<"\t";
    for(int i=1;i<=10;i++)
    {
        cout<<i<<"\t";
    }
    cout<<endl;
    cout<<"___________________________________________________________________________________"<<endl;
}
void ColumnSeprator(int i)
{
    if(i<10)
    {
        cout<<"  |";
    }
    else
    {
        cout<<" |";
    }
}
void PrintMultplicationTable(void)
{
    PrintTableHeader();   
    for(int i=1;i<=10;i++)
    {
        cout<<" "<< i;
        ColumnSeprator(i);
        cout<<"\t";
        for(int j=1;j<=10;j++)
        {
            cout<<i*j<<"\t";
        }
        cout<<endl;
    }

}
int main ()
{
    
    PrintMultplicationTable();
    return 0;
}