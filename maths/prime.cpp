#include <bits/stdc++.h>
using namespace std;

bool primenum(int n){
    int count = 0;
    for(int i = 1; i < sqrt(n) + 1 ; i++){
        if(!(n%i)){
            count++;
        }
    }
    if(count > 1){
        return false;
    }
    else{
        return true;
    }
}

int main(){
    set<int> prime;
    cout << "hi";
    for(int i = 1; i < 1000; i++){
        if(primenum(i)){
            prime.insert(i);
        }
    }
    cout << "hi";
    for(auto it = prime.begin(); it != prime.end(); it++){
        cout << " " << *it << " ";
    }
    return 0;
}