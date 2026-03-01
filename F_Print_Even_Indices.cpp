#include <iostream>
using namespace std;

void print(int arr[], int i, int s) {
    if (i >= s) return;
    
    print(arr, i + 2, s); 
    cout << arr[i] << " ";
}

int main() {
    int s;
    cin >> s;
    
    int arr[s];
    
    for (int i = 0; i < s; i++) {
        cin >> arr[i];
    }
    print(arr, 0, s);
    
    return 0;
}