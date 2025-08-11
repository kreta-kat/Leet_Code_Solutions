#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int singleElement(vector<int> &arr, int n)
{
    //edge cases
    if(arr[0] != arr[1]) { return arr[0]; }
    if(arr[n-2] != arr[n-1]) { return arr[n-1]; }
    
    int low = 2;
    int high = n-3;
    
    while(low <= high)
    {
        int mid = low + ((high-low)/2);
        
        //single element
        if((arr[mid] != arr[mid-1]) && (arr[mid] != arr[mid+1]))
            {return arr[mid]; }
            
        // second occurrence
        if(arr[mid] == arr[mid-1])
        {mid--; }
        
        //first occurrence
        if(mid%2 == 0) { // reject left side
        low = mid+2; }
        else {
            //odd
            //reject right side
            high = mid-1;
        }
    }
   return -1; 
}

int main() {
    int n,k;
    cout << "Enter sorted array to find the single element"<<endl;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << "Single Element is ";
    cout << (singleElement(arr,n));

    return 0;
}