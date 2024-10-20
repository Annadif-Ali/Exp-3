#include <iostream>
using namespace std;

int main() {
    int prn;
    cout << "Enter the last 5 digits of your PRN: ";
    cin >> prn;

    while (prn > 0) {
        cout << prn % 10 << endl;
        prn /= 10;
    }

    return 0;
}

/*
Output Example:
Enter the last 5 digits of your PRN: 12345
5
4
3
2
1
*/
