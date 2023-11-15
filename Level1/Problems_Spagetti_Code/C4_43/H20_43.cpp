#include <iostream>
using namespace std;
// seconds to days ,hours ,Minutes ,seconds
int main()
{
    int secperday, secperhr, secpermin;
    int NumberOfDays, NumberOfHrs, NumberOfMins, NumberOfSec;
    int Total_seconds;
    int remainder;
    cout << "Please enter your  Total seconds" << endl;
    cin >> Total_seconds;
    secperday = 24 * 60 * 60;
    secperhr = 60 * 60;
    secpermin = 60;
    NumberOfDays = Total_seconds / secperday;
    remainder = Total_seconds % secperday;
    NumberOfHrs = remainder / secperhr;
    remainder = remainder % secperhr;
    NumberOfMins = remainder / secpermin;
    remainder = remainder % secpermin;
    NumberOfSec = remainder;
    
    cout << NumberOfDays << ":" << NumberOfHrs << ":" << NumberOfMins << ":" << NumberOfSec << endl;
}
