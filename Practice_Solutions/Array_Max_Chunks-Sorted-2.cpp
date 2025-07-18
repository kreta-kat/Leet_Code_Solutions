#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

vector<int> prefix_Max(vector<int> &arr, int n)
{
    vector<int> pfMax(n);
    pfMax[0] = arr[0];
    for(int i =1; i<n; i++)
    {
        pfMax[i] = max(pfMax[i-1], arr[i]);
    }
    return pfMax;
}

vector<int> suffix_Min(vector<int> &arr, int n)
{
    vector<int> sfMin(n);
    sfMin[n-1] = arr[n-1];
    for(int i =n-2; i>=0; i--)
    {
        sfMin[i] = min(sfMin[i+1], arr[i]);
    }
    return sfMin;
}

int main() {
    int n;
    cout<< "Enter size of array"<<endl;
    cin >> n;
    vector<int> arr(n);
    cout << endl;
    for(int i=0; i<n;i++)
    {
        cin >> arr[i];
    }
    
    vector<int> prefixMax = prefix_Max(arr, n);
    vector<int> suffixMin = suffix_Min(arr, n);
    
    int count =0;
    for(int i=0; i<n-1; i++)
    {
        if(prefixMax[i] <= suffixMin[i+1])
        {
            count++;
        }
    }
    count++;
    cout<<"count is "<<count;
    
    return 0;
}
