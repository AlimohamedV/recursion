#include <iostream>
#include <string>
using namespace std;

void count(string s, int i, int& result) {
    if (i >= s.length()) return;

    char c = s[i];
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        result++;
    }

    count(s, i + 1, result);
}

int main() {
    string s;
    cin >> s; 
    int result = 0;
    count(s, 0, result);
    cout << result << endl;
    
}