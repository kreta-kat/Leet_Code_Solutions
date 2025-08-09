#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(vector<int> &arr, int n, int k)
{
    int low = 0;
    int high = n-1;
    
    while(low <= high)
    {
        int mid = low + ((high-low)/2);
        if(arr[mid] == k) {return true; }
        else if(arr[mid] > k)
        {
            //searc space 0 to m-1
            high = mid-1;
        }
        else {
            //searh space m+1 to high
            low = mid+1;
        }
    }
    return false;
}
int main() {
    int n,k;
    cout << "Enter sorted array to perform binary search"<<endl;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element to search"<<endl;
    cin >> k;
    cout << "Is the element present? :  ";
    cout << (binarySearch(arr,n,k) ? "yes":"no");

    return 0;
}