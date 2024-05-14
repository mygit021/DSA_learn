#include <iostream>
using namespace std;

int sumn(int N){
    if(N == 0){
        return 0;
    }
    else{
        return N + sumn(N-1);
    }
}

int main(){
    int N;
    cout << "Enter the N: ";
    cin>> N;
    cout << "\nsum is : "<< sumn(N);
    return 0;
}