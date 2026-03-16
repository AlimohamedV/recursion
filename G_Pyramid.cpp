#include <iostream>
using namespace std;

void printRow(int spaces, int stars) {
    if (spaces > 0) { cout << " "; printRow(spaces - 1, stars); }
    else if (stars > 0) { cout << "*"; printRow(0, stars - 1); }
    else cout << endl;
}

void pyramid(int row, int n) {
    if (row > n) return;
    printRow(n - row, 2 * row - 1);
    pyramid(row + 1, n);
}

int main() {
    int n;
    cin >> n;
    pyramid(1, n);
}
