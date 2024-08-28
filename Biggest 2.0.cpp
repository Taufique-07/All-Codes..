#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter 3 values:" << endl;
    cin >> a >> b >> c;

    int largest = max({a, b, c});
    int lowest = min(min(a,b),c);

    cout << largest << " is the Biggest." << endl;
    cout << lowest << " is the Smallest." << endl;

    return 0;
}

