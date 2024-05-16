#include <bits/stdc++.h>
using namespace std;

void printarray(vector<int> &a);
void swapArrayElement(vector<int> &a, int position1, int position2);
void merge(vector<int> &a, int low, int mid, int high);
void mergeSort(vector<int> &a, int low, int high);


int main (){
    // int arr[] = {13, 9, 15, 5, 45, 789, 98, 68};
    time_t start, end;
    time(&start);
    vector<int> arr = {5, 1 , 3 , 4 , 8, 7, 9, 0, 5, 2};
    int length = arr.size();
    cout << "\nBefore sorting the array is: ";
    printarray(arr);
    mergeSort(arr, 0, length-1);
    cout << "\nAfter sorting the array is: ";
    printarray(arr);
    time(&end);
    double time_taken = double(end - start); 
    cout << "\nTime taken by program is : " << fixed << time_taken << setprecision(10); 
    cout << " sec " << endl;
    return 0;
}
/*The logic behind selection sort is to first start from a position
and find the minimum element from that position to last position in the 
array; 
Store the position and swap the start position and the minimum position
*/
void merge(vector<int> &a, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while (left <= mid && right <= high)
    {
        if (a[left] <= a[right]) {
            temp.push_back(a[left]);
            left++;
        }
        else {
            temp.push_back(a[right]);
            right++;
        }
    }
    while (left <= mid) {
        temp.push_back(a[left]);
        left++;
    }
    while (right <= high) {
        temp.push_back(a[right]);
        right++;
    }
    for (int i = low; i <= high; i++) {
        a[i] = temp[i - low];
    }

}
void mergeSort(vector<int> &a, int low, int high){
    if(low >= high)
    {
        return;
    }
    int mid = (low + high)/2;
    mergeSort(a, low, mid);
    mergeSort(a, mid+1, high);
    merge(a , low, mid, high);
}

void printarray(vector<int> &a){
    cout << "\n";
    for(auto it = a.begin(); it != a.end(); it++){
        cout << *it << " ";
    }
    return;
}