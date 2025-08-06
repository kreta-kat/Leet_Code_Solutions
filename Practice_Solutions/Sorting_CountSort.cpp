#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

void countSort(vector<int> &arr, int n)
{
    int max_ele = INT_MIN;
    for(int i=0; i<n; i++)
    {
        max_ele = max(max_ele,arr[i]);
    }
    
    vector<int> freq_arr(max_ele+1);
    for(int i=0; i<n; i++)
    {
        int val = arr[i];
        freq_arr[val]++;
    }
    
    int k=0;
    for(int i=0; i<max_ele+1; i++)
    {
        int count = freq_arr[i];
        for(int j=0; j<count; j++)
        {
            arr[k]=i;
            k++;
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
    
    countSort(arr,n);
    
    cout << "Sorting Array using Count Sort "<< endl;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}