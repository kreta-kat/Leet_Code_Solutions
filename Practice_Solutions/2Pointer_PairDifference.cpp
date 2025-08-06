// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool pairDiff(vector<int> &arr, int n, int k)
{
    sort(arr.begin(),arr.end());
    
    int i=0;
    int j =1;
    while(i <n && j <n)
    {
        if((i!= j) && ((arr[j] - arr[i]) == k))
        {
            return true;
        }
        
        else if((arr[j] - arr[i]) > k)
        {
            i++;
        }
        else { 
        //if(abs(arr[j] - arr[i]) < k)
            j++;
        }
    }
    return false;
}

int main() {
    int n,k;
    cout << "Enter Size of array"<<endl;
    cin >> n;
    vector<int> arr(n);
    
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "Enter K such that difference of |arr[i]-arr[j]| == k"<<endl;
    cin >> k;
    cout << (pairDiff(arr,n,k) ? "There is a pair": "No pair");

    return 0;
}
