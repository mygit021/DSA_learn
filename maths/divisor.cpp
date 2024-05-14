#include <bits/stdc++.h>
using namespace std;

int main (){
    int N;
    cout << "Enter the number: ";
    cin >> N;
    set <int> divisors;
    for(int i = 1; i < sqrt(N)+1; i++){
        if(!(N%i)){
            divisors.insert(i);
            divisors.insert(N/i);
        }
    }
    for(auto it = divisors.begin(); it != divisors.end(); it++){
        cout << " " << *it << " ";
    }
    return 0;
}