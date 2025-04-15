// { Practice Array's }
// Workflow:
// 1) Sort the Array
// 2) then Find The Number Given By User in Array
// 3) Search Using Binary Search Method.

#include <iostream>
using namespace std;

void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {  
            if (arr[i] > arr[j]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int Binarysearch(int arr[], int size, int key) {
    int start = 0, end = size - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2; 
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {99, 88, 77, 66};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Before Sorting:" << endl;
    display(arr, size);

    sort(arr, size);

    cout << "After Sorting:" << endl;
    display(arr, size);

    cout << "Enter Number to Find: ";
    cin >> key;

    int result = Binarysearch(arr, size, key);
    if (result != -1) {
        cout << "Found at Index: " << result << endl;
    } else {
        cout << "Not Found!" << endl;
    }

    return 0;
}