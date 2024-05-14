#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i); //inserting elements in the vector
    }
    v.push_back(50);
    v.push_back(45);
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << endl;
    }
    cout << "\nThe front element of the vector: " << v.front();
    cout << "\nThe last element of the vector: " << v.back();
    cout << "\nThe size of the vector: " << v.size();
    cout << "\nDeleting element from the end: " << v[v.size() - 1] << endl;
    v.pop_back();
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << endl;
    }
    cout << v[10];
    return 0;
}