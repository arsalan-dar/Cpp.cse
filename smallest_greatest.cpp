#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;

    int greatest, smallest;

    // Finding Greatest 
    if (a > b) {
        if (a > c) {
            if (a > d) {
                greatest = a;
            } else {
                greatest = d;
            }
        } else {
            if (c > d) {
                greatest = c;
            } else {
                greatest = d;
            }
        }
    } else {
        if (b > c) {
            if (b > d) {
                greatest = b;
            } else {
                greatest = d;
            }
        } else {
            if (c > d) {
                greatest = c;
            } else {
                greatest = d;
            }
        }
    }

    // Finding Smallest 
    if (a < b) {
        if (a < c) {
            if (a < d) {
                smallest = a;
            } else {
                smallest = d;
            }
        } else {
            if (c < d) {
                smallest = c;
            } else {
                smallest = d;
            }
        }
    } else {
        if (b < c) {
            if (b < d) {
                smallest = b;
            } else {
                smallest = d;
            }
        } else {
            if (c < d) {
                smallest = c;
            } else {
                smallest = d;
            }
        }
    }

    // Output
    cout << "Greatest number: " << greatest << endl;
    cout << "Smallest number: " << smallest << endl;

    return 0;
}
