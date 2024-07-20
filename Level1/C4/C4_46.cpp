#include <iostream>
#include <cmath>
using namespace std;
enum enAtoZ{A=65,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z};


void PrintAtoZ(void)
{
	int i=enAtoZ::A;
	while (i <= enAtoZ::Z)
	{
		cout << char(i) << " ";
		i++;
	}
}

int main()
{
	PrintAtoZ();
}