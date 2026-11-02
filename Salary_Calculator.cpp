#include <iostream>
using namespace std;

int main()
{
    float basicSalary, houseRent, medicalAllowance;
    float grossSalary;

    cout << "Enter basic monthly salary: ";
    cin >> basicSalary;

    cout << "Enter house rent allowance: ";
    cin >> houseRent;

    cout << "Enter medical allowance: ";
    cin >> medicalAllowance;

    grossSalary = basicSalary + houseRent + medicalAllowance;

    cout << "\nBasic Salary = Rs. " << basicSalary;
    cout << "\nHouse Rent Allowance = Rs. " << houseRent;
    cout << "\nMedical Allowance = Rs. " << medicalAllowance;
    cout << "\nGross Salary = Rs. " << grossSalary;

    return 0;
}