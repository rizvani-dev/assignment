#include <iostream>
using namespace std;

int main()
{
    float distance, averageConsumption;
    float petrolPrice, petrolConsumed, totalCost;

    cout << "Enter distance travelled (km): ";
    cin >> distance;

    cout << "Enter average consumption (km per litre): ";
    cin >> averageConsumption;

    cout << "Enter petrol price per litre: ";
    cin >> petrolPrice;

    petrolConsumed = distance / averageConsumption;

    totalCost = petrolConsumed * petrolPrice;

    cout << "\nDistance Travelled = " << distance << " km";
    cout << "\nPetrol Consumed = " << petrolConsumed << " litres";
    cout << "\nTotal Fuel Cost = Rs. " << totalCost;

    return 0;
}