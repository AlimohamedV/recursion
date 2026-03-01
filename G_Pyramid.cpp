#include <iostream>
using namespace std;

void print(int row, int n, int spaces, int stars) {
    if (row > n) return;

    if (spaces > 0) {
        cout << " ";
        print(row, n, spaces - 1, stars);
    } 
    else if (stars > 0) {
        cout << "*";
        print(row, n, 0, stars - 1);
    } 
    else {
        cout << endl;
        int nextrow = row + 1;
        int nextspaces = n - nextrow;
        int nextstars = 2 * nextrow - 1;
        
        print(nextrow, n, nextspaces, nextstars);
    }
}

int main() {
    int n;
    cin >> n;
    print(1, n, n - 1, 1);
    
}