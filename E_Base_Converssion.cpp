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
