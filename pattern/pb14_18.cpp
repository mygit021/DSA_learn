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
    cout << endl << "pattern 17"<< endl;
    for(int i = 1; i <= N; i++){
        for(int j = N-i; j>0; j--){
            cout << " ";
        }
        for(int j = 0; j < i; j++){
            cout << char(num+j);
        }
        for(int j = i-1; j > 0; j--){
            cout << char(num+j-1);
        }
        cout << endl;   
    }
    cout << endl << "pattern 18"<< endl;
    int num2 = 'E';
    for(int i = 1; i <= N; i++){
        for(int j = i; j > 0; j--){
            cout << char(num2-j+1);
        }
        cout << endl;
    }
    return 0;
}