#include <iostream>
using namespace std;

int fibonaci(int N){
    if(N <= 1){
        return N;
    }
    else{
        return fibonaci(N-1) + fibonaci(N-2);
    }
}

void printfibonaci(int N){
    if(N < 0){
        return;
    }
    else{
        printfibonaci(N-1);
        cout << fibonaci(N) << " ";
    }
}

int main(){
    int N;
    cout << "Enter the number: ";
    cin >> N;
    printfibonaci(N);
}