#include<iostream>
using namespace std;

int main()
 {
    int num;
    cout << "Enter size: ";
    cin >> num;

    int a[num];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < num; i++)
        cin >> a[i];

    for (int i = 1; i < num / 2; i++)
        {
        int temp = a[i];
        a[i] = a[num - 1 - i];
        a[num - 1 - i] = temp;
       }

    if (num % 2 == 0)
        {
        int middle = num / 2;
        for (int i = middle - 1; i < num - 1; i++)
            a[i] = a[i + 2];
        num -= 2;
       }
    else
        {
        int middle = num / 2;
        for (int i = middle; i < num - 1; i++)
            a[i] = a[i + 1];
        num--;
        }

    cout << "Modified array: ";
    for (int i = 0; i < num; i++)
        cout << a[i] << " ";

    return 0;
}

