#include <iostream>
#include <algorithm>

using namespace std;

int goodIntegerUnique(int arr[], int n)
{
    sort(arr, arr+n);
    int count =0;
    for(int i=0; i<n; i++)
    {
        if(i == arr[i])
        {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter Array Size"<<endl;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    // no of elements < that e == e
    int ans = goodIntegerUnique(arr,n);
    cout << "The number of good integers in which no of elements are less than that number itself: "<<ans;
    
}