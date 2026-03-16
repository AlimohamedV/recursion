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
