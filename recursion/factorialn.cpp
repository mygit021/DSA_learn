#include <iostream>
using namespace std;

int factorial(int N){
    if(N == 0){
        return 1;
    }
    else{
        return N * factorial(N-1);
    }
}

int main(){
    int N;
    cout << "Enter the N: ";
    cin>> N;
    cout << "\nFactorial is : "<< factorial(N);
    return 0;
}