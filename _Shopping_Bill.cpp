#include <iostream>
using namespace std;

int main()
{
    int notebookPrice, notebookQuantity;
    int penPrice, penQuantity;
    int notebookCost, penCost, totalBill;

    cout << "Enter notebook price: ";
    cin >> notebookPrice;

    cout << "Enter notebook quantity: ";
    cin >> notebookQuantity;

    cout << "Enter pen price: ";
    cin >> penPrice;

    cout << "Enter pen quantity: ";
    cin >> penQuantity;

    notebookCost = notebookPrice * notebookQuantity;
    penCost = penPrice * penQuantity;

    totalBill = notebookCost + penCost;

    cout << "\nNotebook Cost = Rs. " << notebookCost;
    cout << "\nPen Cost = Rs. " << penCost;
    cout << "\nTotal Shopping Bill = Rs. " << totalBill;

    return 0;
}