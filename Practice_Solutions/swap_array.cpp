#include <iostream>
#include <climits>
using namespace std;

int main() {
    int idx1, idx2;
    cout<< "enter indexes to swap" << endl;
    cin >> idx1;
    cin >> idx2;
    int temp = 0;
    int arr[] = {10, -2, 5, 3, 4};
    
    temp = arr[idx1];
    arr[idx1] = arr[idx2];
    arr[idx2] = temp;
    for(int i =0; i<5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}