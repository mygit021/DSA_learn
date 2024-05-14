#include <iostream>
using namespace std;

void ntimesprint(int N, string name){
    if(N == 1){
        cout << name << endl;
    }
    else{
        ntimesprint(N-1, name);
        cout << name << endl;
    }
}

int main (){
    ntimesprint(5, "Harsh");
    return 0;
}