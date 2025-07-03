#include <iostream>
#include <climits>
using namespace std;

int main() {
    int temp = 0;
    int arr[] = {10, -2, 5, 3, 4};
    int s =0;
    int n = sizeof(arr)/sizeof(arr[0]);
    int l = n-1;
    while(s<l)
    {
        temp = arr[s];
        arr[s] = arr[l];
        arr[l] = temp;
        s++;
        l--;
    }
    for(int i=0; i<n; i++)
    {
        cout<< arr[i]<< " ";
    }
    return 0;
}