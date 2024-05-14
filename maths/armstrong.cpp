#include <bits/stdc++.h>
using namespace std;

bool armstrong(int N){
    int length = to_string(N).length();
    int sum = 0;
    int num = N;
    int rem;
    while(num > 0){
        rem = num%10;
        sum += pow(rem, length);
        num /= 10;
    }
    if(sum == N){
        return true;
    }
    else{
        return false;
    }
}

int main (){
    //count number of digits;
    vector<int> armstrongnum;
    for(int i = 0; i<1000; i++){
        if(armstrong(i)){
            armstrongnum.push_back(i);
        }
    }
    for(auto it = armstrongnum.begin(); it != armstrongnum.end(); it++){
        cout << " "<< *it << " ";
    }
}