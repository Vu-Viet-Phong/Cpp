#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int search_key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == search_key) {
            return i;
        }
    }
    return -1;
}

int main(void) {
    int arr[] = {12, 6, 50, 34, 25, 44, 29};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = linearSearch(arr, n, x);
    
    (result == -1) 
        ? cout << "Element is not present is array"
        : cout << "Element is present at index" << result;
    return 0;
}