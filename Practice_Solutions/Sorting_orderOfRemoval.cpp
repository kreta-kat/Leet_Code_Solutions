#include <iostream>
#include <algorithm>

using namespace std;

int orderOfRemoval(int arr[], int n)
{
    sort(arr,arr+n);
    
    int ans = 0;
    for(int i=n-1; i>=0; i--)
    {
        ans += arr[i]*(n-i);
    }
    return ans;
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
    
    int ans = orderOfRemoval(arr,n);
    cout << "The cost of removing all elements minimized "<<ans;
}