#include<iostream>
using namespace std;
int Reverse(int arr[], int sz){
    int start = 0;
    int end = sz-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int* arr = new int[n]; 
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Reverse(arr, n);
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}
