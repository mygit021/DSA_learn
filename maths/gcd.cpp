#include <bits/stdc++.h>
using namespace std;
int gcdfind(int n1, int n2){
    int large = max(n1, n2);
    int small = min(n1, n2);
    int rem;
    rem = large%small;
    while(rem != 0)
    {
        large = small;
        small = rem;
        rem = large%small;
    }
    return small;
}

int main(){
    int N1, N2;
    cout << "Enter first number: ";
    cin >> N1;
    cout << "Enter second number: ";
    cin >> N2;
    cout << "GCD is : " << gcdfind(N1, N2);
    return 0;
}