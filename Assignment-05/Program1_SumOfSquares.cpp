
#include <iostream>
using namespace std;

int main()
{
    int N, sum = 0;

    cout << "Enter the value of N: ";
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        sum = sum + (i * i);
    }

    cout << "Sum of squares = " << sum;

    return 0;
}
