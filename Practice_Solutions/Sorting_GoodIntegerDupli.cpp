#include <iostream>
#include <algorithm>

using namespace std;

int goodIntegerDuplicate(int arr[], int n)
{
    int count =0;
    sort(arr,arr+n);
    int dupliCount=0;
    
    //0th index
    if(arr[0] == 0)
    {
        count++;
    }
    for(int i=1; i<n; i++)
    {
        if(arr[i] != arr[i-1]) //first occurrence of element
        {
            dupliCount = i;
        }
        
        //check logic
        if(arr[i] == dupliCount)
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
    int ans = goodIntegerDuplicate(arr,n);
    cout << "The number of good integers in which no of elements are less than that number itself: "<<ans;
    
}