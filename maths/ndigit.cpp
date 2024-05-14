#include <bits/stdc++.h>
using namespace std;

int counter(long long int N){
    int count;
    count = int(log10(N)+1);
    return count;
}

int main(){
    long long int N;
    cout << "Enter the number: ";
    cin >> N;
    int count = 0;
    while(N>0){
        N = N/10;
        count++;
        cout << N;
    }
    cout <<"\n The number of digit is:"<<count<<" "<< counter(N);
}