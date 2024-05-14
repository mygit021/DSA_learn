#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter the number: ";
    cin >> N;
    int newN, rem;
    newN = 0;
    while(N > 0){
        rem = N%10;
        newN = 10*newN + rem;
        N = N/10;
    }
    cout << "\nReversed number is :" << newN;
    return 0;
}