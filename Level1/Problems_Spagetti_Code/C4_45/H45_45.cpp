#include <iostream>
using namespace std;

enum enYearMonth {
    January = 1, Febuary = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August,
    September, October, November, December
};

void YearOfMonth()
{
    int Month;
    cout << "****************************************************************" << endl;
    cout << "Please Choose the number of the Month!" << endl;
    cout << "(1) January " << endl;
    cout << "(2) Febuary " << endl;
    cout << "(3) March " << endl;
    cout << "(4) April " << endl;
    cout << "(5) May " << endl;
    cout << "(6) June " << endl;
    cout << "(7) July " << endl;
    cout << "(8) August " << endl;
    cout << "(9) September " << endl;
    cout << "(10) October " << endl;
    cout << "(11) November " << endl;
    cout << "(12) December " << endl;
    cout << "****************************************************************" << endl << endl;
    cout << "Your choice is :";
    cin >> Month;
    enYearMonth YearMonth;
    YearMonth = (enYearMonth)Month;


    switch (YearMonth)
    {
    case enYearMonth::January:
        cout << "January" << endl;
        break;
    case enYearMonth::Febuary:
        cout << "Febuary" << endl;
        break;
    case enYearMonth::March:
        cout << "March" << endl;
        break;
    case enYearMonth::April:
        cout << "April" << endl;
        break;
    case enYearMonth::May:
        cout << "May" << endl;
        break;
    case enYearMonth::June:
        cout << "June" << endl;
        break;
    case enYearMonth::July:
        cout << "July" << endl;
        break;
    case enYearMonth::August:
        cout << "August" << endl;
        break;
    case enYearMonth::September:
        cout << "September" << endl;
        break;
    case enYearMonth::October:
        cout << "October" << endl;
        break;
    case enYearMonth::November:
        cout << "November" << endl;
        break;
    case enYearMonth::December:
        cout << "December" << endl;
        break;
    default:
        cout << "Not a Year Month" << endl;
        break;
    }
}

int main()
{
    YearOfMonth();
}
