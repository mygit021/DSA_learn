#include <iostream>

using namespace std;

int main(){
    int N;
    cout << "Enter N: ";
    cin >> N;
    for(int i = 1; i <= 2*N; i++){
        if(i <= N){
            for(int j = 0; j < N - i; j++ )
            {
                cout << " ";
            }
            for(int j = 0; j < 2*i-1; j++ )
            {
                cout << "*";
            }
            cout << endl;
        }
        else{
            for(int j = N-1; j > 2*N - i; j-- )
            {
                cout << " ";
            }
            for(int j = 2*(2*N-i+1)-1; j > 0 ; j--)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
}