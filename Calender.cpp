#include <iostream>
#include <iomanip>

using namespace std;

bool LeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void print(int year) {
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    cout << "Calendar for Year " << year << "\n\n";

    for (int month = 1; month <= 12; ++month)
        {
        cout << setw(12) << left << setfill(' ') << "Month " << month << ":\n";
        cout << " Sun Mon Tue Wed Thu Fri Sat\n";

        int firstDay = 1;
        int monthDays = days[month];
        if (month == 2 && LeapYear(year))
            {
            monthDays = 29;
            }

        struct tm timeStruct = {0, 0, 0, firstDay, month - 1, year - 1900};
        mktime(&timeStruct);

        for (int i = 0; i < timeStruct.tm_wday; ++i)
            {
            cout << "    ";
            }

        for (int day = 1; day <= monthDays; ++day)
            {
            cout << setw(4) << right << day;
            if ((timeStruct.tm_wday + day) % 7 == 0)
            {
                cout << "\n";
            }
        }

        cout << "\n\n";
    }
}

int main()
{
    int year;
    cout << "Enter the year: ";
    cin >> year;

    print(year);

    return 0;
}

