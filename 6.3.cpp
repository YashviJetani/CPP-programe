#include <iostream>
using namespace std;

int main() {
    int size1, size2;
    cout << "Enter size of first sorted array: ";
    cin >> size1;
    cout << "Enter size of second sorted array: ";
    cin >> size2;
    int* arr1 = new int[size1];
    int* arr2 = new int[size2];
    cout << "Enter elements of first sorted array:\n";
    for (int i = 0; i < size1; ++i)
        {
        cin >> arr1[i];
    }
    cout << "Enter elements of second sorted array:\n";
    for (int i = 0; i < size2; ++i)
        {
        cin >> arr2[i];
    }
    int* merged = new int[size1 + size2];
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2)
        {
        if (arr1[i] < arr2[j])
            {
            merged[k++] = arr1[i++];
        } else
        {
            merged[k++] = arr2[j++];
        }
    }
    while (i < size1) {
        merged[k++] = arr1[i++];
    }

    while (j < size2) {
        merged[k++] = arr2[j++];
    }
    cout << "Merged sorted array:\n";
    for (int m = 0; m < size1 + size2; ++m) {
        cout << merged[m] << " ";
    }
    cout << endl;
    delete[] arr1;
    delete[] arr2;
    delete[] merged;

    return 0;
}
