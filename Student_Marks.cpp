#include <iostream>
using namespace std;

int main()
{
    float s1, s2, s3, s4, s5;
    float total, average, percentage;

    cout << "Enter marks of Subject 1: ";
    cin >> s1;

    cout << "Enter marks of Subject 2: ";
    cin >> s2;

    cout << "Enter marks of Subject 3: ";
    cin >> s3;

    cout << "Enter marks of Subject 4: ";
    cin >> s4;

    cout << "Enter marks of Subject 5: ";
    cin >> s5;

    total = s1 + s2 + s3 + s4 + s5;

    average = total / 5;

    percentage = (total / 500) * 100;

    cout << "\nTotal Marks = " << total;
    cout << "\nAverage Marks = " << average;
    cout << "\nPercentage = " << percentage << "%";

    return 0;
}