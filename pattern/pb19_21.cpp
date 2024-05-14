#include <iostream>
using namespace std;

void upperpattern(int N);
void lowerpattern(int N);
void pattern20(int N);
void pattern21(int N);
void pattern22(int N);

int main(){
    int N;
    cout << "Enter N: ";
    cin >> N;
    upperpattern(N);
    lowerpattern(N);
    cout << endl;
    pattern20(N);
    cout << endl;
    pattern21(N);
    cout << endl;
    pattern22(N);
    return 0;
}

void upperpattern(int N){
    for(int i = 0; i < N; i++)
    {
        for(int j = N-i; j > 0; j--){
            cout << "*";
        }
        for(int j = 0; j<2*i; j++){
            cout << " ";
        }
        for(int j = N-i; j > 0; j--){
            cout << "*";
        }
        cout << endl;
    }
}
void lowerpattern(int N){
    for(int i = N-1; i >= 0; i--)
    {
        for(int j = N-i; j > 0; j--){
            cout << "*";
        }
        for(int j = 0; j<2*i; j++){
            cout << " ";
        }
        for(int j = N-i; j > 0; j--){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern20(int N){
    for(int i = N-1; i >= 0; i--)
    {
        for(int j = N-i; j > 0; j--){
            cout << "*";
        }
        for(int j = 0; j<2*i; j++){
            cout << " ";
        }
        for(int j = N-i; j > 0; j--){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 1; i < N; i++)
    {
        for(int j = N-i; j > 0; j--){
            cout << "*";
        }
        for(int j = 0; j<2*i; j++){
            cout << " ";
        }
        for(int j = N-i; j > 0; j--){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern21(int N){
    int i = 0;
    while(i < N){
        cout << "*";
        i++;
    }
    cout << endl;
    for(i = 0; i < N-2; i++){
        cout << "*";
        for(int j = 0; j < N-2; j++){
            cout << " ";
        }
        cout << "*" << endl;
    }
    i = 0;
    while(i < N){
        cout << "*";
        i++;
    }
}
void pattern22(int N){
    int i = 0;
    while(i < 2*N-1){
        cout << N;
        i++;
    }
    cout << endl;
    for(i = 0; i < 2*N-3; i++){
        cout << N;
        for(int j = 0; j < 2*N-3; j++){
            cout << N-1;
        }
        cout << N << endl;
    }
    i = 0;
    while(i < 2*N-1){
        cout << N;
        i++;
    }
}
