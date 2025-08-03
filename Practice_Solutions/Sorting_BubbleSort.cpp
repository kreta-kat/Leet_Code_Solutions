#include <iostream>
#include <algorithm>

using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i=0; i<=n-2; i++)
    {
        for(int j=0; j<=n-2-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                //swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    for(int i=0; i<n; i++)
    {
        cout << arr[i]<< " ";
    }
}


int main() {
    int n;
    cout << "Enter Array Size to sort Array using Bubble Sort"<<endl;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    bubbleSort(arr,n);
    return 0;
}