#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter N: ";
    cin >> N;
    for(int i = 1; i < 2*N; i++){
        if(i <= N){
            for(int j = 0; j<i; j++){
                cout << "*";
            }
                cout << endl;
        }
        else{
            for(int j = 2*N - i; j > 0; j--){
                cout << "*";
            }
                cout << endl;
        }
    }
    cout << endl << "pattern 11" << endl << endl;
    for(int i = 1; i <= N; i++){
        for(int j = i; j > 0; j--){
            cout << j%2;
        }
        cout << endl;
    }
    cout << endl << "pattern 12" << endl << endl;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        for(int j = 0; j<2*(N - i); j++){
            cout << " ";
        }
        for(int j = i; j > 0; j--){
            cout << j;
        }
        cout << endl;
    }
    cout << endl << "pattern 13" << endl << endl;
    int globe = 1;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= i; j++){
            cout << globe++ << " ";
        }
        cout << endl;
    }
    return 0;
}