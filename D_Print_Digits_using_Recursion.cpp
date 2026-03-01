/*Given a number N. Print the digits of N separated by a space.

Note: Solve this problem using recursion.
Input

First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 109).
Output

For each test case print a single line contains the digits of the number separated by space.*/
#include <iostream>
using namespace std;
void print(int n) {
    if (n == 0) return;

    if (n < 10) {cout << n; return;}

    print(n / 10);
    cout << " " << (n % 10);
}

int main() {
    int s;
    cin >> s;
    for (int i = 0; i < s; i++) {
        int n;
        cin >> n;
        print(n);
        cout << endl;
    }
}