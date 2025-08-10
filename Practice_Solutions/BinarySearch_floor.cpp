#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int floorSearch(vector<int> &arr, int n, int k)
{
    int low = 0;
    int high = n-1;
    int ans = INT_MIN;
    
    while(low<=high)
    {
        int mid = low + ((high - low)/2);
        
        if(arr[mid] == k) {return k;}
        else if(arr[mid] < k) 
        {  
            if(arr[mid] > ans) {
                ans = arr[mid];
            } 
            low = mid+1;
        }    
        else
        {
            //arr[mid] > k
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n,k;
    cout << "Enter sorted array to find floor of a number"<<endl;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element to search"<<endl;
    cin >> k;
    cout << "Floor of number ";
    cout << (floorSearch(arr,n,k));

    return 0;
}