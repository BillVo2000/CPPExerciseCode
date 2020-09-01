#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstdlib>
using namespace std;

void printNextDate(int day, int month, int year)
{
    if ((day == 31) && (month==1 || month==3 || month==5 || month==7 || month==8 || month==10|| month==12))
        {cout << 1;}
    else if ((day <= 0) || (day > 31) || (month > 12) || (month < 0) || (year < 0) )
       {cout << -1;}
    else if ((day == 30) && (month==2 || month==6 || month==9 || month==11))
        {cout << 1;}
    else if ((day == 31) && (month==2 || month==6 || month==9 || month==11))
        {cout << -1;}
    else if ((year % 4 != 0) && (month == 4) && (day==28))
        {cout << 1;}
    else if ((year % 4 == 0) && (month == 4) && (day==29))
        {cout << 1;}
    else
        cout << day + 1;
}

int main ()
{
    int day, month, year;
    cin >> day;
    cin >> month;
    cin >> year;
    printNextDate(day,month,year);
    return 0;
}

