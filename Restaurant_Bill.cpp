   #include <iostream>
using namespace std;

int main()
{
    float totalBill, billPerFriend;
    int numberOfFriends;

    cout << "Enter total restaurant bill: ";
    cin >> totalBill;

    cout << "Enter number of friends: ";
    cin >> numberOfFriends;

    billPerFriend = totalBill / numberOfFriends;

    cout << "\nTotal Restaurant Bill = Rs. " << totalBill;
    cout << "\nNumber of Friends = " << numberOfFriends;
    cout << "\nBill Per Friend = Rs. " << billPerFriend;

    return 0;
}