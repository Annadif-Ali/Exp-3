#include <iostream>
using namespace std;

int main() {
    float x, y;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;

    if (x > 0 && y > 0) {
        cout << "The point (" << x << ", " << y << ") is in the first quadrant." << endl;
    } else if (x < 0 && y > 0) {
        cout << "The point (" << x << ", " << y << ") is in the second quadrant." << endl;
    } else if (x < 0 && y < 0) {
        cout << "The point (" << x << ", " << y << ") is in the third quadrant." << endl;
    } else if (x > 0 && y < 0) {
        cout << "The point (" << x << ", " << y << ") is in the fourth quadrant." << endl;
    } else {
        cout << "The point (" << x << ", " << y << ") is on an axis." << endl;
    }

    return 0;
}

/*
Output Example:
Enter x coordinate: -3
Enter y coordinate: 4
The point (-3, 4) is in the second quadrant.
*/
