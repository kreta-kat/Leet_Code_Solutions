#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int> &arr, int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min_ele = arr[i];
        int min_idx = i;
        for(int j = i+1; j<n; j++)
        {
            if( min_ele > arr[j])
            {
                min_ele = arr[j];
                min_idx = j;
            }
        }
        //swap 
        int temp = arr[i];
        arr[i] = min_ele;
        arr[min_idx] = temp;
    }
}

int main() {
    int n;
    cout << "Enter Size of array" << endl;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n;i++)
    {
        cin >> arr[i];
    }
    
    selectionSort(arr,n);
    
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}