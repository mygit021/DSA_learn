#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> s;
    cout << "unordered set begins : \n";
    for(int i = 0; i < 10; i++){
        s.insert(i);
    }
    for(auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }
    cout << "hi\n\n";
    int n;
    cout << "Enter number to find: ";
    cin >> n;
    if(s.find(n) != s.end())
    {
        cout << n << " is present in unordered set" << endl;
    }
    else{
        cout << n << " is not present in unordered set" << endl;
    }
    s.erase(s.begin());
    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << * it << " ";
    }
    cout << endl;
    cout << "The size of the unordered set is: " << s.size() << endl;
    if (s.empty() == false)
        cout << "The unordered set is not empty " << endl;
    else
        cout << "The unordered set is empty" << endl;
    s.clear();
    cout << "Size of the unordered set after clearing all the elements: " << s.size();
    cout << endl << s.empty();
    return 0;
}