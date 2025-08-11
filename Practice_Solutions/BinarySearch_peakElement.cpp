#include <iostream>
#include <vector>

using namespace std;

int peakElement(vector<int> &arr, int n)
{
    
    //edge cases
    if(n ==1 ) {return 0;}
    
    if(arr[0] > arr[1]) {return 0;}
    if(arr[n-1] > arr[n-2]) {return n-1;}
    
    int low = 1;
    int high = n-2;
    while(low <= high)
    {
        int mid = low + ((high-low)/2);
        //true case
        if((arr[mid] > arr[mid-1]) && (arr[mid] > arr[mid+1]))
        {return mid;}
        else if((arr[mid-1] > arr[mid]) || ((arr[mid] < arr[mid-1]) && arr[mid] < arr[mid+1]))
        {high = mid-1;}
        else if(arr[mid+1] > arr[mid])
        {low = mid+1;}
    }
    
    return -1;
}
int main() {
    int n;
    cout << "Enter array to get the peak element"<<endl;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "Peak element index where the number is greater tham adjacent elements"<<endl;
    cout <<(peakElement(arr,n));
    return 0;
}