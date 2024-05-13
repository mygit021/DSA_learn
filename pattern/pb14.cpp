#include <iostream>
using namespace std;

int main(){
    int num;
    int N;
    cout << "Enter N: ";
    cin >> N;
    num = 'A';
    cout << endl << "pattern 14"<< endl;
    for(int i = 0; i < N; i++){
        for(int j = 0; j<=i; j++){
            cout << char(num+j);
        }
        cout << endl;
    }
    cout << endl << "pattern 15"<< endl;
    for(int i = N; i > 0; i--){
        for(int j = 0; j < i; j++){
            cout << char(num+j);
        }
        cout << endl;
    }
    cout << endl << "pattern 16"<< endl;
    for(int i = 0; i < N; i++){
        for(int j = 0; j <= i; j++){
            cout << char(num+i);
        }
        cout << endl;
    }
}