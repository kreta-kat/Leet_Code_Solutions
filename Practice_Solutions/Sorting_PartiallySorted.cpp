#include <iostream>
#include <vector>

using namespace std;

void insertElement(vector<int> &arr, int n)
{
    for(int j = n-2; j>=0; j--)
    {
        if(arr[j] > arr[j+1])
        {
            //swap(arr,j,j+1);
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
        else
        {
            break;
        }
    }
}

int main() {
    int n;
    cout << "Enter Size of Array"<<endl;
    cin >> n;
    
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    insertElement(arr,n);
    
    cout << "Sorted Array inserted element in n-1 sorted array "<< endl;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}