#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

void wiggleSort(vector<int> &arr, int n)
{
    for(int i=0; i<n-1;i++)
    {
        if(i%2 == 0) //even place
        {
            //it has to be smaller than odd
            if(arr[i] > arr[i+1])
            {
                    swap(arr[i],arr[i+1]);
            }
        }
        else {
            //odd place has to be greater
                if(arr[i] < arr[i+1])
                {
                    swap(arr[i], arr[i+1]);
                }
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
    
    wiggleSort(arr,n);
    cout << "Wiggle Condition: nums[0]<=nums[1] >= nums[2] <= nums[3] >= nums[4]..."<<endl;
    cout << "Wiggle Sort Output "<< endl;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}