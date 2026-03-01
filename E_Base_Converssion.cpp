/*Given a number N. Print the binary equivalent of N.

Note: Solve this problem using recursion.
Input

First line contains a number T (1 ≤ T ≤ 104) number of test cases.

Next T lines will contain a number N (1 ≤ N ≤ 109).
Output

For each test case print a single line contains the answer according to the required above.*/
#include <iostream>
using namespace std;
void print(int n){
    if (n <= 0) return;
    print(n/2);
    cout<<n%2;
}
int main(){
    int s;
    cin>>s;
    for (int i = 0; i < s; i++) {
        int n;
        cin>>n;
        print(n);
        cout<<endl;
    }
}