#include <iostream>
using namespace std;

int main()
{
    int ageYears;
    int ageMonths, ageWeeks, ageDays;

    cout << "Enter your age in years: ";
    cin >> ageYears;

    ageMonths = ageYears * 12;

    ageWeeks = ageYears * 52;

    ageDays = ageYears * 365;

    cout << "\nAge in Years = " << ageYears;
    cout << "\nAge in Months = " << ageMonths;
    cout << "\nAge in Weeks = " << ageWeeks;
    cout << "\nAge in Days = " << ageDays;

    return 0;
}