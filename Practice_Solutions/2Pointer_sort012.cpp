#include <iostream>
#include <vector>

using namespace std;

void sort012(vector<int> &arr, int n)
{
    // (0 to i-1) -> 0
    // (i to j) -> 1
    // (j+1 to k-1) -> unsolved
    // (k to n-1) -> 2
    int i = 0;
    int j = 0;
    int k = n-1;
    
    while(j<=k)
    {
        if(arr[j] == 0)
        {
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        else if(arr[j] == 1)
        {
            j++;
        }
        else if(arr[j] == 2)
        {
            swap(arr[j],arr[k]);
            k--;
        }
    }
}

int main() {
    int n;
    cout << "Enter Size of array"<<endl;
    cin >> n;
    vector<int> arr(n);
    
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    sort012(arr,n);
    cout << "Sorted Array" << endl;
    
    for(int i=0; i<n; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}