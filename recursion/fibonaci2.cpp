#include <iostream>
using namespace std;

long long int a, b, c, d;
#define MOD 1000000007

void fib_fast_doubling(long long n, long long res[]){
    if (n == 0){
        res[0] = 0;
        res[1] = 1;
        return;
    }
    fib_fast_doubling(n/2, res);
    a = res[0];
    b = res[1];
    c = 2*b -a;
    if (c < 0)
        c += MOD;
    c = (a * c) % MOD;
    d = (a * a + b * b) % MOD;
    if (n % 2 == 0) {
        res[0] = c;
        res[1] = d;
    }
    else {
        res[0] = d;
        res[1] = c + d;
    }
}

void printfibonaci(long long N){
    if(N < 0){
        return;
    }
    else{
        printfibonaci(N-1);
        long long res[2] = { 0 };
        fib_fast_doubling(N, res);
        cout << res[0] << " ";
    }
}
int main()
{
    long long N;
    cout << "Enter the number: ";
    cin >> N;
    printfibonaci(N);
    return 0;
}